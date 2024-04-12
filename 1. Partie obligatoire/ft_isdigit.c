/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 09:49:42 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 11:44:48 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction permet de tester si un caractère est un chiffre 
décimal (= 0 à 9) ou non. 
Valeur renvoyée : Une valeur positive non nulle signifira qu'il s'agit bien 
d'un caractère alpha-numérique. La valeur 0 indiquera qu'il ne s'agit pas 
d'un caractère apha-numérique.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*int	main(void)
{
	int i = '3';
	printf("%d\n", ft_isdigit(i));
	printf("%d\n", isdigit(i));
}*/