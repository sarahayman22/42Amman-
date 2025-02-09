/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 12:55:31 by saabo-sh          #+#    #+#             */
/*   Updated: 2025/01/12 12:55:33 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*first_node;
	t_node	*current;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	first_node = *stack;
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	current->next = first_node;
	first_node->prev = current;
	*stack = first_node->next;
	(*stack)->prev = NULL;
	first_node->next = NULL;
}

void	rotate_a(t_node **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", 1);
}

void	rotate_b(t_node **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", 1);
}
