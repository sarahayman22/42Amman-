/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:35:43 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/17 14:43:54 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <string.h>

int	ft_lstsize(t_list *lst)
{
	if (lst == NULL)
	{
		return (0);
	}
	return (1 + ft_lstsize(lst -> next));
}
/*
int main(void)
{
    // Create nodes with string content
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));

    if (!node1 || !node2 || !node3)
    {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    // Assign content to the nodes
    node1->content = strdup("Node 1");
    node2->content = strdup("Node 2");
    node3->content = strdup("Node 3");

    if (!node1->content || !node2->content || !node3->content)
    {
        perror("Failed to allocate memory for content");
        exit(EXIT_FAILURE);
    }

    // Initialize next pointers to build the list
    node1->next = NULL;
    node2->next = node1;
    node3->next = node2;

    // Set head to the first node
    t_list *head = node3;

    // Use ft_lstsize to count the number of elements
    int size = ft_lstsize(head);
    printf("The list has %d elements.\n", size);

    // Free allocated memory
    t_list *current = head;
    while (current != NULL)
    {
        t_list *temp = current;
        current = current->next;
        free(temp->content);
        free(temp);
    }

    return 0;
}*/
