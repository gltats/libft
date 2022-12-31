/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:26:18 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/31 16:04:06 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//sets the first len bytes of the memory area pointed to by b to the value c
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*x;

	x = b;
	while (len > 0)
	{
		*x = c;
		x++;
		len--;
	}
	return (b);
}

//int	main(void)
//{
//	char str[] = "Hello";
//	printf("%s", ft_memset(str, 'a', 3));
//	return (0);
//}