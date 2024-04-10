/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:38:59 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/10 17:53:10 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction permet de convertir une lettre minuscule (de ASCII)
en une lettre majuscule.
Valeur renvoyée : Cette fonction retourne le caractère équivalent transformé 
en majuscule, si le caractère passé en paramètre était une minuscule. Si le 
caractère passé n'était pas une minuscule, alors la fonction retourne le 
caractère inchangé. 
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*#include<ctype.h>
int main(void)
{
    printf("%c\n", toupper('t'));
    printf("%c\n", ft_toupper('t'));
}*/
