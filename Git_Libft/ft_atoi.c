/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:36:37 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/24 10:30:54 by hdemanet         ###   ########.fr       */
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

static int	check_space(int c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (8162);
	return (0);
}

static int	check_digit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long int	nbr;
	long long int	check;
	int				sign;

	nbr = 0;
	sign = 1;
	while (*str && check_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str && check_digit(*str))
	{
		check = nbr;
		nbr = (nbr * 10) + sign * (*str - '0');
		if (nbr > check && sign < 0)
			return (0);
		if (nbr < check && sign > 0)
			return (1);
		str++;
	}
	return (nbr);
}

/*int	main(void)
{
	char	c[] = " -123Soleil";
	printf("%d\n", atoi(c));
	printf("%d\n", ft_atoi(c));
}*/
