/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:01:48 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/09 12:31:21 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  srcsize;
    size_t	i;

	if (!dst || !src)
        return (0);
    srcsize = ft_strlen(src);
    i = 0;
	if (dstsize != 0)
    {
        while (src[i] != '\0' && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }   
        dst[i] = '\0';
    }
    return (srcsize);
}

#inlcude<stdio.h>
#inlcude<string.h>

int main(void)
{
    char    dest[] = "000000";
    char    src[] = "123456";
    printf("Dest avant : %s\n", dest);
    //ft_strlcpy(dest, src, 4);
    strlcpy(dest, src, 4);
    printf("Dest apres : %s\n", dest);
    return (0);
}