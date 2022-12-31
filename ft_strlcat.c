/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:55:57 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/31 16:14:05 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//This function concatenates the null-terminated string src to the end of the 
//null-terminated string dst, but with a maximum size of dstsize
size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	c = ft_strlen(dst);
	d = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (src[d] && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

// int main(void)
// {
// 	char *src = "hello"; 
//     char dest[17];  
//     printf("Dest: \"%s\"\n", dest); 
//     ft_strlcat(dest, src, sizeof(dest)); 
//     printf("After function:\n Dest: \"%s\"\n", dest); 
//     return 0;
// }