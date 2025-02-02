/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:10:45 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/17 09:22:30 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Écrit l’entier ’n’ sur le descripteur de fichier donné.
Valeur renvoyée : Aucune 
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

/*int	main(void)
{
	int	n = 9;
	ft_putnbr_fd(n, 1);
}*/