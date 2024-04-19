/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:14:10 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/19 16:53:49 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Supprime et libère la mémoire de l’élément passé en paramètre, et 
de tous les éléments qui suivent, à l’aide de ’del’ et de free(3).
Enfin, le pointeur initial doit être mis à NULL.
Valeur renvoyée : Aucune
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	free (*lst);
	*lst = NULL;
}

/* void	ft_delete(void *content)
{
	*(int *)content = 0;
	return ;
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
	ft_lstclear(&new_element, &ft_delete);
	printf("Rien ne doit s'écrire a la suite du 2eme printf\n");
	t_list	*tmp;
	tmp = new_element;
	while (tmp)
	{
		printf("%i ", *((int *)tmp->content));
		tmp = tmp->next;
	}
} */
