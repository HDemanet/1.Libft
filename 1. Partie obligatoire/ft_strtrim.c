/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:35:45 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 16:00:15 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Alloue (avec malloc(3)) et retourne une copie de la chaîne ’s1’, 
sans les caractères spécifiés dans ’set’ au début et à la fin de la chaîne de
caractères.
Valeur renvoyée : La chaîne de caractères trimmée. NULL si l’allocation échoue.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*int	main(void)
{
	char	*s2 = ft_strtrim("*123*", "*");
	printf("%s\n", s2);
	free (s2);
}*/