/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:09:36 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/23 17:30:32 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*source;
	char	*st1;
	char	*st2;

	st1 = (char *)s1;
	st2 = (char *)s2;
	if (!st1 || !st2)
		return (0);
	dest = (char *)malloc(sizeof(dest) * (ft_strlen(st1) + ft_strlen(st2)));
	source = dest;
	while (*st1)
	{
		*dest++ = *st1++;
	}
	while (*st2)
	{
		*dest++ = *st2++;
	}
	return (source);
}

// int		main(void)
// {
// 	char	*s1 = "Tatiana";
// 	char	*s2 = "Sofia";
// 	char	*strjoin;

// 	if (!(strjoin = ft_strjoin(s1, s2)))
// 			return(0);
// 	else
// 		printf("%s", strjoin);
// 	if (strjoin == s1 || strjoin == s2)
// 		printf("\nA new string was not returned");
// 	return(0);
// }
