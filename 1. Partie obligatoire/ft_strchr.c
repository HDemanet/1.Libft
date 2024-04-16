/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:50:47 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/15 18:05:42 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction recherche la première occurrence de 'c' dans la 
chaine de caractères 's'.
Valeur renvoyée : Si 'c' est trouvé, un pointeur vers cet emplacement dans la 
chaine est renvoyé. Si pas, la fonction renvoie NULL.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}

/*int	main(void)
{
	printf("%s\n", strchr("Hello", '\0'));
	printf("%s\n", ft_strchr("Hello", '\0'));
}*/