/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:15:09 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/18 15:07:52 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Renvoie le dernier élément de la liste.
Valeur renvoyée : Dernier élément de la liste.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
	if (*((int *)(ft_lstlast(new_element)->content)) == 1)
		printf("OK\n");
	else
		printf("KO\n");
} */