/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:13:52 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/17 14:56:05 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//appends string src to the end of dst.
char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

//int main(void)
//{
//	char src[] = "Append this :)";
//	char dest[] = "To this";
//	int i =0, j = 0;
//	while (src[i] != '\0') i++;
//	while (dest[j] != '\0') j++;
//	printf("The total length should be %d\n", i+j);
//	write(1, ft_strcat(dest, src), i+j);
//	write(1,"\n",1);
//	j = 0;
//	while (dest[j] != '\0') j++;
//	printf("The total length is %d\n", j);
//}