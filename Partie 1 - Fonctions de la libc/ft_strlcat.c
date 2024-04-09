/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:33:11 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/09 13:37:54 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t strlcat(char *dst, const char *src, size_t dstsize);
{
    size_t  i;
    size_t  j;

    if(dstsize <= ft_strlen(dst))
        return (dstsize + ft_strlen(src));
    i = ft_strlen(dst);
    j = 0;
    while (src[j] != '\0' && (i + 1) < dstzise)
    {
        dst[i] = dst[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (ft_strlen(dst) + ft_strlen(&src[j]));

}