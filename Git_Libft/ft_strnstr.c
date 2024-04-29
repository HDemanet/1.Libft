/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:49:58 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/16 09:27:11 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction recherche la sous-chaine 'needle' dans la chaine
'haystack', mais au max sur les 'len' premiers caractères de 'haystack'.
Valeur renvoyée : Si la sous-chaine est trouvée, un pointeur vers l'adresse son 
premier caractère est renvoyé ; sinon, NULL.
Si la sous-chaine est vide, un pointeur vers le début de la chaîne haystack est 
retourné. 
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%s\n", strnstr("Helene", "ne", 6));
	printf("%s\n", ft_strnstr("Helene", "ne", 6));
}*/