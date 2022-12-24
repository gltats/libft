/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:00:42 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/24 18:17:04 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The strrchr() function locates the last occurrence of c.
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*letter;

	letter = (char *)s;
	i = ft_strlen(letter);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			letter = (char *)&s[i];
			return (letter);
		}
		i--;
	}
	return (0);
}

// int main()
// {
// 	char	str[] = "Hello World";
// 	printf("%s\n", ft_strrchr(str, ' '));
// 	printf("%s", strrchr(str, ' '));
// }