/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:14:22 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/18 15:07:05 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Compte le nombre d’éléments de la liste.
Valeur renvoyée : Taille de la liste
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
	if (ft_lstsize(new_element) == 4)
		printf("OK\n");
	else
		printf("KO\n");
} */