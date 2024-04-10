/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:33:11 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/10 17:48:19 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction concaténise des chaines de manière sécurisée en 
évitant les dépassements de tampon (en prenant en compte la taille totale du 
tampon de dst >< 'strncat').
Valeur renvoyée : Longueur totale de la chaine résultante après la concaténis
Si cela dépasse la taille max, la fonction retourne la taille totale de la chaine
résultante avant qu'elle ne soit tronquée. 
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	while (src[j] != '\0' && (i + 1) < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}

/*#include<string.h>
int main(void)
{
    printf("%s\n", strlcat("Helene ", "Demanet", 14));
    //printf("%s\n", ft_strlcat("Helene ", "Demanet", 14));
}*/
