/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <saabo-sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 10:56:13 by saabo-sh          #+#    #+#             */
/*   Updated: 2025/01/12 09:45:15 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void print_stack(t_node **stack_a)
// {
//     t_node *tmp;

//     if (!stack_a || !(*stack_a))
//     {
//         printf("Stack is empty.\n");
//         return;
//     }

//     printf("Stack contents:\n");
//     tmp = *stack_a;
//     while (tmp)
//     {
//         printf("%d\n", tmp->value);
//         tmp = tmp->next;
//     }
// }

int	main(int arc, char **arv)
{
	t_node	*a;
	int		i;

	a = NULL;
	if (arc > 2)
	{
		i = 1;
		if (!(check_dup(arv, arc)))
			error(2, &a);
		while (i < arc)
		{
			if (!(is_num(arv[i])))
				error(2, &a);
			else
				i++;
		}
		optimize(arc, arv, &a);
	}
	ft_free(&a);
	return (0);
}
