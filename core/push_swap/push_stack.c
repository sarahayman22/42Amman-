/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 12:54:51 by saabo-sh          #+#    #+#             */
/*   Updated: 2025/01/12 13:21:06 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*temp;

	if (!stack_b || !(*stack_b))
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->prev = NULL;
	temp->next = *stack_a;
	if (*stack_a)
		(*stack_a)->prev = temp;
	*stack_a = temp;
	ft_putstr_fd("pa\n", 1);
}

void	push_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*temp;

	if (!stack_a || !(*stack_a))
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	temp->next = *stack_b;
	if (*stack_b)
		(*stack_b)->prev = temp;
	temp->prev = NULL;
	*stack_b = temp;
	ft_putstr_fd("pb\n", 1);
}
