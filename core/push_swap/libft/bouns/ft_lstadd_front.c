/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:29:04 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/17 14:43:13 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <string.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			new->next = *lst;
		}
		*lst = new;
	}
}
/*
int main(void)
{
    // Create an empty list
    t_list *head = NULL;

    // Create new nodes with string content
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));
    
    if (!node1 || !node2 || !node3) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    // Assign content to the nodes
    node1->content = strdup("Node 1");
    node2->content = strdup("Node 2");
    node3->content = strdup("Node 3");
    
    if (!node1->content || !node2->content || !node3->content) {
        perror("Failed to allocate memory for content");
        exit(EXIT_FAILURE);
    }

    node1->next = NULL;
    node2->next = NULL;
    node3->next = NULL;

    // Add nodes to the front of the list
    ft_lstadd_front(&head, node1);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    // Print the list
    t_list *current = head;
    while (current != NULL)
    {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");

    // Free allocated memory
    current = head;
    while (current != NULL)
    {
        t_list *temp = current;
        current = current->next;
        free(temp->content);
        free(temp);
    }

    return 0;
}*/
