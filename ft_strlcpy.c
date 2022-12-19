/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:14:50 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/17 15:06:28 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies up to dstsize - 1 characters from the string src to dst, 
//NUL-terminating the result if dstsize is not 0.

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	int				length;

	x = 0;
	length = 0;
	while (src[length])
	{
		if (size != 0)
		{
			while (src[x] && x < size - 1)
			{
			dest[x] = src[x];
			x++;
			}
		dest[x] = '\0';
		}
		length++;
	}
	return (length);
}

//int main(void)
//{
//	char *src;
//	unsigned int	size;
//	char dest[10];
//	
//	size = 5;
//	src = "working";
//
//	ft_strlcpy(dest,src,size);
//	printf("%d\n", ft_strlcpy(dest, src, size));
//	return(0);
//	
//}