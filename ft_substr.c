/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:09:45 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/23 17:13:59 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "lorem ipsu\n";
// 	char	*strsub;
// 	int		arg;
// 	if (!(strsub = ft_substr(str, 0, 10)))
// 		return(0);
// 	else
// 		printf("%s", strsub);		
// 	if (str == strsub)
// 		printf("\nA new string was not returned");
// 	return(0);
// }