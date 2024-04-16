/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:23:03 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/15 16:09:02 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction permet de copier les 'n' premiers octets de la zone
mémoire pointée par 'src' vers la zone mémoire pointée par 'dst'. ! Elle ne 
vérifie pas les limites des zones de mémoire, donc on doit éviter que 'src' et 
'dst' se chevauchent. Si c'est le cas, il faut utiliser 'memmove'. 
Valeur renvoyée : Adresse du bloc de mémoire de dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*dst_ptr;

	dst_ptr = dst;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*(char *)dst = *(char *) src;
		dst = (char *)dst + 1;
		src = (char *)src + 1;
		n--;
	}
	return (dst_ptr);
}

/*int	main(void)
{
	char	src[] = "123456";
	char	dest[] = "000000";
	printf("Avant: %s\n", dest);
	//memcpy(dest, src, 4);
	ft_memcpy(dest, src, 4);
	printf("Apres: %s\n", dest);
}*/