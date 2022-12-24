/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:22:38 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/22 17:01:50 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{	
	char	*dest;
	char	*source;

	dest = (char *) dst;
	source = (char *) src;
	while (n--)
	{
		*dest = *source;
		dest++;
		source++;
	}
	return (dst);
}

// int main()  
//  {   
// 	char dest[ 50 ];
// 	char src[ ] = "Hola";

// 	printf("dest= %s\n", dest);
// 	printf("src= %s\n", src);

// 	ft_memcpy(dest, src, strlen(src) + 1);
// 	printf("ft function displays my beautiful dest: %s\n", dest);	  
// 	memcpy(dest, src, strlen(src) + 1);
// 	printf("real function displays dest: %s\n", dest);

// }