/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:36:18 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/17 08:43:08 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Applique la fonction ’f’ à chaque caractère de la chaîne de 
caractères transmise comme argument, et en passant son index comme premier 
argument. Chaque caractère est transmis par adresse à ’f’ afin d’être modifié 
si nécessaire. 
ft_striteri >< ft_strmapi : modification de la chaine d'origine >< création d'une
nouvelle chaine 
Valeur renvoyée : Aucune.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (*s != '\0')
	{
		(*f)(i, s);
		i++;
		s++;
	}
}

/* void	f_function(unsigned int i, char *c)
{
	printf("Caractere a l'indice %u: %c\n", i, toupper(*c));
}

int	main(void)
{
	char			input_str[] = "Helene";
	printf("Affichage des caractères de la chaîne avec leur index :\n");
    ft_striteri(input_str, &f_function);
} */