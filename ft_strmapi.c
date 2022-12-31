/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:09:39 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/31 16:15:31 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//This is a C function that applies a function f to each character of a 
//null-terminated string s, and creates a new null-terminated string from 
//the resulting characters.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*str;
	char	*temp_s;

	temp_s = (char *)s;
	i = 0;
	if (!temp_s || !f)
		return (0);
	len = ft_strlen(temp_s);
	(str = (char *)malloc(sizeof(char) * (len + 1)));
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = (*f)(i, temp_s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char f(int i, char c)
// {
// 	char str;
// 	str = c + 1;
// 	return (str);
// }
// int main()
// {
// 	char str1[] = "abcd";
// 	char* str2;
// 	str2 = ft_strmapi(str1, *f);
// 	printf("%s\n", str2);
// }