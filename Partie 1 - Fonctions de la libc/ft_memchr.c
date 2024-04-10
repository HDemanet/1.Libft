/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:04:34 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/10 17:41:56 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction recherche la 1ère occurence du caractère 'c' 
(converti en un 'unsigned char') dans les 'n' premiers octets de la zone mémoire 
pointée par 's'. Elle est similaire à 'strchr', mais elle fonctionne sur des 
blocs de mémoire arbitraires plutôt que sur des chaines de caractères.
Valeur renvoyée : La fonction renvoie un pointeur vers l'octet trouvé, ou NULL si
le caractère n'est pas trouvé.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (0);
}

/*#include<string.h>
int	main(void)
{
	const char	*str = "123456";
	//const char	*ptr = memchr(str, '3', 5);
	const char	*ptr = ft_memchr(str, '3', 5);
	printf("Premiere occurence de 'c': %s", ptr);
}*/
