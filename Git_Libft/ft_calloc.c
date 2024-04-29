/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:45:22 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/24 10:41:52 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : Cette fonction alloue de la mémoire dynamique pour un tableau 
d'éléments spécifié, avec tous les éléments initialisés à 0 (>< malloc qui ne 
modifie pas la zone de mémoire).
Valeur renvoyée : un pointeur (de type 'void' -> à caster au besoin) sur la zone 
nouvellement allouée ; NULL si la mémoire n'a pas été allouée.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*dst;
	unsigned int	tot;
	unsigned int	i;

	tot = count * size;
	dst = malloc(tot);
	if (!(dst))
		return (NULL);
	i = 0;
	while (tot--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}

/*int	main(void)
{
	int	i = 0;
	//int	*ptr = calloc(6, sizeof(int));
	int	*ptr = ft_calloc(6, sizeof(int));
	if (ptr == NULL)
	{
		printf("Echec de l'allocation\n");
		return (EXIT_FAILURE);
	}
	while (i < 10)
	{
		ptr[i] = i * 10;
		printf("p[%u] = %d\n", i, ptr[i]);
		i++;
	}
	free (ptr);
}*/