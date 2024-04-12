/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:36:37 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 11:33:11 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction convertit une chaine de caractères représentant un
entier en un entier de type 'int'.
Valeur renvoyée : Si la chaîne à convertir ne contient pas une donnée numérique 
entière, la valeur 0 vous sera retournée. Sinon, une valeur de type int 
équivalente à la chaîne passée en paramètre vous sera retournée.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	signe;

	nbr = 0;
	signe = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = signe * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + *str - '0';
		str++;
	}
	return (signe * nbr);
}

/*int	main(void)
{
	char	c[] = " -123Soleil";
	printf("%d\n", atoi(c));
	printf("%d\n", ft_atoi(c));
}*/
