/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:56:50 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/12 12:03:14 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Écrit la chaîne de caractères ’s’ sur le descripteur de fichier 
donné.
Valeur renvoyée : Aucune 
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}

/*int	main(void)
{
	char	s[] = "Helene";
	ft_putstr_fd(s, 1);
}*/