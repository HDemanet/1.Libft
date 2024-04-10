/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:36:39 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/10 09:43:42 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Headers*/

# include <unistd.h>
# include <stdio.h>

/* Declaration de structures */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

#endif