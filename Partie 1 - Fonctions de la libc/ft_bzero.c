/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:55:04 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/10 17:27:47 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : La fonction bzero() initialise les 'n' premiers octets à 0 dans 
la zone mémoire pointée par 's'. ! Il est recommandé d'utiliser 'memset' pour 
l'initialisation de la mémoire à 0.
Valeur renvoyée : aucune.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*#include<strings.h>
int	main(void)
{
	char	str[] = "Helene";
	printf("Avant: %s\n", str);
	ft_bzero(str, 2);
	//bzero(str, 2);
	printf("Apres: %s\n", str);
}*/
