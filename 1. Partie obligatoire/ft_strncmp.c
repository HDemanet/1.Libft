/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:22:52 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/16 08:33:13 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction compare les 'n' premiers caractères des chaines
's1' et 's2'.
Valeur renvoyée : Un entier négatif si s1 < s2 ; 0 si s1 = s2 jusqu'au nième 
caractère ; un entier positif si s1 > s2.
*/

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/*int	main(void)
{
	printf("%d\n", ft_strncmp("BXL", "BXL1", 3));
	printf("%d\n", strncmp("BXL", "BXL1", 3));
	return (0);
}*/