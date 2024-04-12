/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:34:35 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 15:30:31 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Alloue (avec malloc(3)) et retourne une chaîne de caractères 
issue de la chaîne ’s’. Cette nouvelle chaîne commence à l’index ’start’ et
a pour taille maximale ’len’.
Valeur renvoyée : La nouvelle chaîne de caractères. NULL si l’allocation échoue.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	s2 = (char *)malloc(sizeof(char) * (finish + 1));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s + start, finish + 1);
	return (s2);
}

/*int	main(void)
{
	char	*s1 = "123456";
	char	*s2;
	s2 = ft_substr(s1, 4, 2);
	printf("Initial : %s, Dup : %s\n", s1, s2);
	free (s2);
}*/