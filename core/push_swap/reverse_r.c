/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 12:55:22 by saabo-sh          #+#    #+#             */
/*   Updated: 2025/01/12 12:55:24 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_r(t_node **stack)
{
	t_node	*last;
	t_node	*first;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	first = *stack;
	while (first->next != NULL)
		first = first->next;
	last = first;
	if (first->prev)
		first->prev->next = NULL;
	last->prev = NULL;
	last->next = *stack;
	(*stack)->prev = last;
	*stack = last;
}

void	rra(t_node **stack_a)
{
	reverse_r(stack_a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_node **stack_b)
{
	reverse_r(stack_b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_node **stack_b, t_node **stack_a)
{
	reverse_r(stack_b);
	reverse_r(stack_a);
	ft_putstr_fd("rrr\n", 1);
}
