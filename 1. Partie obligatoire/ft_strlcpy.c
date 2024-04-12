/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:01:48 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 12:10:56 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction copie au plus 'dstsize - 1' caractères de la chaine
'src' dans la chaine 'dst', puis ajoute un caractère nul de fin à la fin de la
chaine 'dst'.
Valeur renvoyée : La longueur totale de la chaine src (= nbr de caractères 
qu'elle aurait copiés si 'dstsize' avait été suffisamment grand pour contenir 
toute la chaine src)
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*int main(void)
{
    char    dest[] = "000000";
    char    src[] = "123456";
    printf("Dest avant : %s\n", dest);
    ft_strlcpy(dest, src, 4);
    //strlcpy(dest, src, 4);
    printf("Dest apres : %s\n", dest);
    return (0);
}*/