/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:14:52 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/18 15:28:39 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Libère la mémoire de l’élément passé en argument en utilisant la 
fonction ’del’ puis avec free(3). La mémoire de ’next’ ne doit pas être free.
Donc, cela libere un seul element de la liste chainee.
Valeur renvoyée : Aucune
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
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
	t_list	*tmp = new_element->next;
	ft_lstdelone(new_element, ft_delete);
	new_element = tmp;
	while (tmp)
	{
		printf("%i ", *((int *)tmp->content));
		tmp = tmp->next;
	}
}  */