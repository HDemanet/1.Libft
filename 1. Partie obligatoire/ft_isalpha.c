/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 09:33:36 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 11:43:27 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction permet de tester si un caractère est alphabétique 
(= lettre présente dans ASCII) ou non. 
Valeur renvoyée : Une valeur positive non nulle signifira qu'il s'agit bien d'un 
caractère alpha-numérique. La valeur 0 indiquera qu'il ne s'agit pas d'un 
caractère apha-numérique.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	int i = 'h';
	printf("%d\n", ft_isalpha(i));
	printf("%d\n", isalpha(i));
}*/