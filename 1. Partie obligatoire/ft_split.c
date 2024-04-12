/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:01:24 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/11 18:29:47 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Alloue (avec malloc(3)) et retourne un tableau de chaînes de 
caractères obtenu en séparant ’s’ à l’aide du caractère ’c’, utilisé comme 
délimiteur. Le tableau doit être terminé par NULL.
Valeur renvoyée : Le tableau de nouvelles chaînes de caractères résultant du 
découpage. NULL si l’allocation échoue.
*/

#include "libft.h"

size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**s_split;
	size_t	word_len;
	int		i;

	s_split = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !s_split)
		return (0);
	i = 0;
	while (*s != '\0')
	{
		while (*s == c && *s)
			s++;
		if (*s != '\0')
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			s_split[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	s_split[i] = NULL;
	return (s_split);
}

/*int	main(void)
{
	int		i = 0;
	char	*s = "Ecole 19";
	char	**s_split = ft_split(s, ' ');
	while (i < 2)
	{
		printf("s_plit %d : %s\n", i, s_split[i]);
		i++;
	}
	free (s_split); 
}*/