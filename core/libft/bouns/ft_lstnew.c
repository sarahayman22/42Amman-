/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:48:10 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/15 17:32:11 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdint.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
/*
int main ()
{
	  t_list *node1 = ft_lstnew((void *)(uintptr_t)10); 
	  t_list *node2 = ft_lstnew((void *)(uintptr_t)20);
	  node1->next = node2;

    printf("First: %d\n", (int)(uintptr_t)node1->content);
    printf("Second: %d\n", (int)(uintptr_t)node1->next->content);
       free(node2);
       free(node1);
}*/
