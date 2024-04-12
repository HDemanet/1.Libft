/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:33:21 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 11:50:01 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction compare les 'n' premiers octets des zones mémoire 
pointées par 's1' et 's2'.
Valeur renvoyée : Elle renvoie un entier négatif, nul ou positif si les 'n' 
premiers octets de 's1' sont inf, égaux ou sup aux 'n' premiers octets de 's2'.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", memcmp("Helene", "Helena", 5));
	printf("%d\n", ft_memcmp("Helene", "Helena", 5));
}*/