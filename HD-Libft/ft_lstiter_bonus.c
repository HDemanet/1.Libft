/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:15:01 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/18 15:29:46 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Itère sur la liste ’lst’ et applique la fonction ’f’ au contenu 
chaque élément.
Valeur renvoyée : Aucune
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void	ft_print(void *content)
{
	printf("%i ", *((int*)content));
}

int	main(void)
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
	ft_lstiter(new_element, &ft_print);
} */