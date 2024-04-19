/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:20:57 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 11:44:07 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction permet de tester si un caractère est ASCII ou non. 
Valeur renvoyée : Une valeur différente de 0 si le caractère est ASCII, et 
0 si pas.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	int i = ' ';
	printf("%d\n", ft_isascii(i));
	printf("%d\n", isascii(i));
}*/