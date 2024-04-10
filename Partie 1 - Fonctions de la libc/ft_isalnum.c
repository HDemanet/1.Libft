/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:11:21 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/10 17:29:23 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction permet de tester si un caractère est alpha-numérique
(= lettre ou chiffre présents dans ASCII) ou non.
Valeur renvoyée : Une valeur positive non nulle signifira qu'il s'agit bien d'un 
caractère alpha-numérique. La valeur 0 indiquera qu'il ne s'agit pas d'un 
caractère apha-numérique.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a') && (c <= 'z') || (c >= 'A')
		&& (c <= 'Z') || (c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
/*#include<ctype.h>
int	main(void)
{
	int i = ' ';
	//printf("%d", ft_isalnum(i));
	printf("%d", isalnum(i));
}*/