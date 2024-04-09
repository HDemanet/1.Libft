/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:22:27 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/09 19:21:49 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
    int i;
    const char  *j;

    j = s;
    i = ft_strlen(s);
    s = s + i;
    while (*s != *j && c != *s)
        s--;
    if (c == *s)
        return ((char *)s);
    return (0);
}