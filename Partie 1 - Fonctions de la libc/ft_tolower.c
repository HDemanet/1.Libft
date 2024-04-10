/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:46:02 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/10 17:52:35 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction permet de convertir une lettre majuscule (ASCII)
en une lettre minuscule.
Valeur renvoyée : Cette fonction retourne le caractère équivalent transformé 
en minuscule, si le caractère passé en paramètre était une majuscule. Si le 
caractère passé n'était pas une majuscule, alors la fonction retourne le 
caractère inchangé. 
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*#include<ctype.h>
int main(void)
{
    printf("%c\n", tolower('T'));
    printf("%c\n", ft_tolower('T'));
}*/
