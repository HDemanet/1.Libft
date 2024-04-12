/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:04:29 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/12 12:09:54 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Écrit La chaîne de caractères ’s’ sur le descripteur de fichier 
donné suivie d’un retour à la ligne.
Valeur renvoyée : Aucune 
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s || fd < 0)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/*int	main(void)
{
	char	s[] = "Helene";
	ft_putendl_fd(s, 1);
}*/