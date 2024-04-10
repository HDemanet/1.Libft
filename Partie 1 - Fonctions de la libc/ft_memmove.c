/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:18:12 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/10 17:46:24 by hdemanet         ###   ########.fr       */
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
	size_t	i;

	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*#include<string.h>
int	main(void)
{
	char	src[] = "123456";
	char	dst[] = "000000";
	printf("Dst avant: %s\n", dst);
	//memmove(dst, src, 2);
	ft_memmove(dst, src, 2);
	printf("Dst apres: %s\n", dst);
}*/