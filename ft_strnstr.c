/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:23:45 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/31 16:16:54 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//This is a C function that searches for the first occurrence of the 
//null-terminated string sm in the null-terminated string bg, 
//but with a maximum number of len characters. 
char	*ft_strnstr(const char *bg, const char *sm, size_t len)
{
	size_t	i;
	size_t	j;
	char	*small;
	char	*big;

	small = (char *)sm;
	big = (char *)bg;
	i = 0;
	if (small[0] == '\0')
		return ((char *) bg);
	while (big[i] && i <= len)
	{
		j = 0;
		while (small[j] == big[i + j] && i + j < len)
		{
			if (small[j + 1] == '\0')
			{
				return (big + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

//int main(void)
//{
//	char str[] = "Hello World";
//	char find[] = "w";
//	printf("%s\n", ft_strnstr(str, find, 7));
//	printf("%s", strnstr(str, find, 7));
//}