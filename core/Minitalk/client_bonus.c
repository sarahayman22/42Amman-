/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <saabo-sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:55:59 by saabo-sh          #+#    #+#             */
/*   Updated: 2025/01/23 16:49:54 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	g_flag = 0;

void	flag_h(int sig)
{
	if (sig == SIGUSR1)
		g_flag = 1;
}

int	is_valid_pid(const char *str)
{
	int	i;
	int	pid;

	if (!str || !*str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	pid = ft_atoi(str);
	if (pid <= 0)
		return (0);
	if (kill(pid, 0) == -1)
		return (0);
	return (1);
}

void	send_signals_to_server(int pid, char *message)
{
	int	bit;
	int	index;

	index = 0;
	while (1)
	{
		bit = 0;
		while (bit < 8)
		{
			if ((message[index] >> (7 - bit) & 1))
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			while (!g_flag)
				;
			g_flag = 0;
			bit++;
		}
		if (!message[index])
			break ;
		index++;
	}
	ft_printf("Message sent successfully!\n");
}

void	handle_error(int n)
{
	if (n == 1)
		ft_printf("[ERROR]: Invalid PID\n");
	else if (n == 2)
		ft_printf("[ERROR]: Empty message\n");
	else if (n == 3)
		ft_printf("Usage: ./client <PID> <message>\n");
	exit(1);
}

int	main(int argc, char **argv)
{
	struct sigaction	client_action;
	int					s_pid;
	char				*message;

	sigemptyset(&client_action.sa_mask);
	client_action.sa_handler = flag_h;
	client_action.sa_flags = 0;
	sigaction(SIGUSR1, &client_action, NULL);
	if (argc != 3)
		handle_error(3);
	if (!is_valid_pid(argv[1]))
		handle_error(1);
	s_pid = ft_atoi(argv[1]);
	if (!s_pid)
		handle_error(1);
	message = argv[2];
	if (!*message)
		handle_error(2);
	send_signals_to_server(s_pid, message);
	return (0);
}
