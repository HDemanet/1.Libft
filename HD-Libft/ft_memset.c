/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:04:25 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/12 13:40:13 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction remplit les 'len' premiers octets de la zone 
mémoire pointée par 'b' avec la valeur 'c' (= '\0' ou toutes autres valeurs).
Valeur renvoyée : Adresse de la mémoire réinitialisée (= valeur du paramètre 'b')
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char	str[] = "Helene";
	printf("Avant: %s\n", str);
	ft_memset(str, '*', 5);
	//memset(str, '*', 5);
	printf("Apres: %s\n", str);
}*/