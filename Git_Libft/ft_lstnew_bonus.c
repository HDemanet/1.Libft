/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:10:32 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/18 15:04:25 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Alloue (avec malloc(3)) et renvoie un nouvel élément. La variable 
membre ’content’ est initialisée à l’aide de la valeur du paramètre ’content’. 
La variable ’next’ est initialisée à NULL.
Valeur renvoyée : Le nouvel élément
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}

/* int	main(void)
{
	int	tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	t_list	*new_element = ft_lstnew(tab);
	if (new_element && !new_element->next && new_element->content
		&& *((int*)new_element->content) == 1)
		printf("OK\n");
	else
		printf("KO\n");
} */