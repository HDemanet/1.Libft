/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:38:59 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/12 14:38:33 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction calcule la longueur d'une chaine de caractères
(= nbr de caractères avant '\0').
Valeur renvoyée : Longueur de la chaine.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/*int	main(void)
{
	char	i[] = "Helene";
	printf("%d\n", ft_strlen(i));
	printf("%lu\n", strlen(i));
}*/