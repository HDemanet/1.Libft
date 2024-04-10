/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:30:49 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/10 17:30:26 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction permet de tester si un caractère s'affiche 
(is printable; caractères ayant une représentation graphique + espace) ou non.
Valeur renvoyée : Une valeur positive non nulle signifira qu'il s'agit bien 
d'un caractère pouvant s'afficher visuellement. La valeur 0 indiquera qu'il ne 
s'agit pas d'un caractère pouvant s'afficher. 
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

/*#include<ctype.h>
int	main(void)
{
	int i = '\n';
	printf("%d", ft_isprint(i));
	printf("%d", isprint(i));
}*/