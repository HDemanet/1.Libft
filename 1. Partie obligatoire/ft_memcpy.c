/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:23:03 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 11:50:59 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction permet de copier les 'n' premiers octets de la zone
mémoire pointée par 'src' vers la zone mémoire pointée par 'dst'. ! Elle ne 
vérifie pas les limites des zones de mémoire, donc on doit eéviter que 'src' et 
'dst' se chevauchent. Si c'est le cas, il faut utiliser 'memmove'. 
Valeur renvoyée : Adresse du bloc de mémoire de dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	src[] = "123456";
	char	dest[] = "000000";
	printf("Avant: %s\n", dest);
	memcpy(dest, src, 4);
	//ft_memcpy(dest, src, 4);
	printf("Apres: %s\n", dest);
}*/