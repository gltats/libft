/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:22:49 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/17 23:14:39 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*letter;

	while (*s)
	{
		if (*s == c)
		{
			letter = (char *) s;
			return (letter);
		}
		s++;
	}
	return (0);
}

// int	main()
// {
// 	char	str[] = "HELLOOOO";
// 	printf("%s\n", ft_strchr(str, 'H'));
// 	printf("%s", strchr(str, 'H'));
// }