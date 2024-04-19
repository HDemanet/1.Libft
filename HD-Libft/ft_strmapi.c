/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:49:27 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/12 11:08:19 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Applique la fonction ’f’ à chaque caractère de la chaîne de 
caractères passée en argument pour créer une nouvelle chaîne de caractères 
(avec malloc(3)) résultant des applications successives de ’f’
Valeur renvoyée : La chaîne de caractères résultant des applications
successives de ’f’.
Retourne NULL si l’allocation échoue
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s2;

	i = 0;
	if (!s || !f)
		return (NULL);
	s2 = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (s[i] != '\0')
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*char	f_function(unsigned int i, char c)
{
	return (c + 1);
}

int	main(void)
{
	char			input_str[] = "123456";
	char			*result_str = ft_strmapi(input_str, f_function);

	if (result_str != NULL)
	{
		printf("Chaine d'origine : %s\n", input_str);
		printf("Resultat apres ft_strmapi : %s\n", result_str);
		free (result_str);
	}
	else
		printf("Erreur d'allocation de memoire\n");
}*/