/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:23:39 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/19 17:39:13 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	while (len > 0)
	{
		*dest = *source;
		dest++;
		source++;
		len--;
	}
	return (dest);
}

//int main () {
//   char dest[] = "holas";
//   const char src[]  = "adios";
//
//   printf("Before memmove:\n dest = %s, src = %s\n\n", dest, src);
//   memmove(dest, src, 3);
//   printf("After memmove:\n dest = %s, src = %s\n\n", dest, src);
//
//   ft_memmove(dest, src, 3);
//   printf("From my function, after memmove:\n 
//		dest = %s, src = %s\n\n", dest, src);
//
//   return(0);
//}
