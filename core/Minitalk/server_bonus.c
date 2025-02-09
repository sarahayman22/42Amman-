/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <saabo-sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:56:19 by saabo-sh          #+#    #+#             */
/*   Updated: 2025/01/23 17:53:44 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_powr_rec(int b, int p)
{
	if (p == 0)
		return (1);
	else if (p < 0)
		return (0);
	return (b * ft_powr_rec(b, p - 1));
}

char	*add_letter(char *str, int const l)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(char) * (ft_strlen(str) + 2));
	if (!new)
	{
		free(str);
		return (NULL);
	}
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i++] = l;
	new[i] = '\0';
	free(str);
	return (new);
}

void	signal_sigaction(int sig_num, siginfo_t *info, void *c)
{
	static int	b;
	static int	r;
	static char	*final;

	(void)c;
	if (!final)
		final = ft_strdup("");
	if (sig_num == SIGUSR2)
		r = r + (ft_powr_rec(2, (7 - b)));
	b++;
	if (b == 8)
	{
		final = add_letter(final, r);
		if (r == '\0')
		{
			ft_printf("%s\n", final);
			free(final);
			final = NULL;
		}
		b = 0;
		r = 0;
	}
	if (info && info->si_pid > 0)
		kill(info->si_pid, SIGUSR1);
}

int	main(int argc, char **argv)
{
	struct sigaction	server_action;

	if (argc != 1)
		return (1);
	(void)argv;
	ft_printf("you are now in server :)\n");
	ft_printf("server PID = %d\n", getpid());
	sigemptyset(&server_action.sa_mask);
	server_action.sa_sigaction = signal_sigaction;
	server_action.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &server_action, NULL);
	sigaction(SIGUSR2, &server_action, NULL);
	while (1)
	{
		pause();
	}
	return (0);
}
