/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:13:59 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/18 15:06:19 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Ajoute l’élément ’new’ au début de la liste.
Valeur renvoyée : Aucune
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	int	tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	t_list	*new_element = NULL;
	int	i = 1;

	while (i < 5)
	{
		tab[i] = i;
		ft_lstadd_front(&new_element, ft_lstnew(tab + i));
		i++;
	}
	t_list	*tmp = new_element;
	while (tmp)
	{
		printf("%i ", *(int *)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
} */