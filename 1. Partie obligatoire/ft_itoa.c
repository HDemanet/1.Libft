/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:49:11 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 18:20:39 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Alloue (avec malloc(3)) et retourne une chaîne de caractères 
représentant l’entier ’n’ reçu en argument. Les nombres négatifs doivent être 
gérés.
Valeur renvoyée : La chaîne de caractères représentant l’entier.
NULL si l’allocation échoue.
*/

#include "libft.h"

int	count_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*dst;
	int			count;
	int			i;
	long int	nb;

	nb = n;
	count = count_size(nb);
	i = 0;
	if (nb < 0 || count == 0)
		count++;
	dst = (char *)malloc((count + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		dst[0] = '-';
		i++;
	}
	while (count-- > i)
	{
		dst[count] = (nb % 10) + '0';
		nb /= 10;
	}
	return (dst);
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(-123456));
	return (0);
}*/
