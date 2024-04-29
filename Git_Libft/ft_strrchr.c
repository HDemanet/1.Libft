/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:22:27 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 12:13:49 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction recherche la dernière occurence de 'c' dans la
chaine de caractères 's'.
Valeur renvoyée : Si 'c' est trouvé, un pointeur vers cet emplacement dans la 
chaine est renvoyé. Si pas, la fonction renvoie NULL.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/*int main(void)
{
    printf("%s\n", strrchr("100122", '1'));
	printf("%s\n", ft_strrchr("100122", '1'));
}*/
