/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:50:47 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 11:53:11 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction recherche la première occurence de 'c' dans la 
chaine de caractères 's'.
Valeur renvoyée : Si 'c' est trouvé, un pointeur vers cet emplacement dans la 
chaine est renvoyé. Si pas, la fonction renvoie NULL.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}

/*int	main(void)
{
	printf("%s\n", strchr("Hello", 'o'));
	printf("%s\n", ft_strchr("Hello", 'o'));
}*/