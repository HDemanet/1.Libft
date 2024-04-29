/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:13:46 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/19 16:52:03 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Ajoute l’élément ’new’ à la fin de la liste.
Valeur renvoyée : Aucune
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

/* int	main(void)
{
	int	tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	t_list	*new_element = NULL;
	int	i = 1;
	
	while (i < 5)
	{
		tab[i + 5] = i;
		ft_lstadd_back(&new_element, ft_lstnew(tab + i + 5));
		i++;
	}
	t_list	*tmp = new_element;
	while (tmp)
	{
		printf("%i ", *(int *)tmp->content);
		tmp = tmp->next;
	}
} */
