/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:15:18 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/22 11:41:50 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Itère sur la liste ’lst’ et applique la fonction ’f ’au contenu 
de chaque élément. Crée une nouvelle liste résultant des applications successives
de ’f’. La fonction ’del’ est là pour détruire le contenu d’un élément si 
nécessaire.
Valeur renvoyée : La nouvelle liste. NULL si l’allocation échoue.
*/

#include "libft.h"

static t_list	*lst_new(void *content)
{
	t_list	*new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}

static void	lst_clear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del || !(*lst))
		return ;
	lst_clear(&(*lst)->next, del);
	(del)((*lst)->content);
	free(*lst);
	*lst = NULL;
}

static void	lstadd_back(t_list **lst, t_list *new)
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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_node = lst_new(set);
		if (!new_node)
		{
			del(set);
			lst_clear(&new_list, (*del));
			return (new_list);
		}
		lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* void	ft_delete(void *content)
{
	*(int *)content = 0;
	return ;
}

void	*ft_malloc(void *content)
{
	void	*new_content;

	new_content = malloc(sizeof(int));
	*((int *)new_content) = *((int *)content) + 10;
	return (new_content);
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
	t_list	*map;
	map = ft_lstmap(new_element, &ft_malloc, &ft_delete);
	while (map)
	{
		if (new_element->content)
			printf("%i ", *((int *)(map->content)));
		map = map->next;
	}
} */