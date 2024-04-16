/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:18:12 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/15 14:02:03 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : = 'memcpy', mais en prenant en compte les cas où les zones de 
mémoire source et destination se chevauchent. Elle garantit que les données 
seront correctement copiées sans risque de corruption.
Valeur renvoyée : Adresse du bloc de mémoire de dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*dst_ptr;

	dst_ptr = dst;
	if ((!dst && !src) || (dst == src))
		return (dst);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	else
	{
		while (len > 0)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
			len--;
		}
	}
	return (dst_ptr);
}

/*int	main(void)
{
	char	src[] = "123456";
	char	dst[] = "000000";
	printf("Dst avant: %s\n", dst);
	//memmove(dst, src, 2);
	ft_memmove(dst, src, 2);
	printf("Dst apres: %s\n", dst);
}*/