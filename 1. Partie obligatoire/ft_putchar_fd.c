/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:35:52 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/12 12:03:35 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Écrit le caractère ’c’ sur le descripteur de fichier donné.
Valeur renvoyée : Aucune 
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write (fd, &c, 1);
}

/*int	main(void)
{
	char	c = '*';
	ft_putchar_fd(c, 1);
}*/