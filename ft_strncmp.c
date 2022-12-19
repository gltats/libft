/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:15:31 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/17 15:13:40 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//function compares not more than n characters.  
//Because strncmp() is designed for 
//comparing strings rather than binary data, characters that appear after a `\0'
//character are not compared.

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] || s2[x]) && x < n)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	x++;
	}
	return (0);
}

//#include <string.h>
//#include <stdio.h>
//
//int main(void)
//{
//	char *first = "Hel";
//	char *second = "Hel";
//	int decision;
//
//	decision = strncmp(first, second, 5);
//    if (decision == 0) printf("They are equal\n");
//    if (decision > 0) printf("First string is greater than second\n");
//	if (decision < 0) printf("Second string is greater than first\n");
//
//	decision = ft_strncmp(first, second, 5);
//	if (decision > 0)
//		write(1, "First string is greater than second\n", 36);
//	else 
//	if (decision < 0)
//		write(1, "Second string is greater than first\n", 36);
//	else
//		write(1, "They are equal\n", 15);
//}