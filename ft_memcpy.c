/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:22:38 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/19 17:45:27 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{	
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	while (n > 0)
	{
		*dest = *source;
		dest++;
		source++;
		n--;
	}
	return (dest);
}

//int main()  
//  {   
//	char dest[ 50 ];
//	char src[ ] = "Hola";
//
//	printf("dest= %s\n", dest);
//	printf("src= %s\n", src);
//
//	ft_memcpy(dest, src, strlen(src) + 1);
//	printf("ft function displays my beautiful dest: %s\n", dest);
//		  
//	memcpy(dest, src, strlen(src) + 1);
//	printf("real function displays dest: %s\n", dest);
//
// }