/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:47:21 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 11:56:03 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction permet de dupliquer une chaîne de caractères 
existante en allouant dynamiquement de la mémoire pour la nouvelle chaine et en 
copiant la chaine existante dans la mémoire nouvellement allouée.
Valeur renvoyée : S'il y a suffisament de mémoire pour produire la nv chaîne,
la fonction renvoie l'adresse de la chaîne dupliquée. Dans le cas contraire, 
un pointeur nul vous sera retourné. 
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*dst;

	size = ft_strlen(s1);
	dst = (char *)malloc(size * sizeof(char) + 1);
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, s1, size);
	dst[size] = '\0';
	return (dst);
}

/*int	main(void)
{
	char	*s1 = "Helene";
	char	*s2;
	//s2 = strdup(s1);
	s2 = ft_strdup(s1);
	printf("Initial : %s, Dup : %s\n", s1, s2);
	free (s2);
}*/