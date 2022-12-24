/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:09:11 by tgomes-l          #+#    #+#             */
/*   Updated: 2022/12/23 17:07:28 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i = i * -1;
		count++;
	}
	while (i > 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;

	nb = n;
	i = ft_count(nb);
	str = malloc(i * sizeof(char) + 1);
	if (!str)
		return (0);
	str[i--] = '\0';
	if (nb == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i] = 48 + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (str);
}

// int main(void)
// {
// 	printf("%s\n", ft_itoa(854876));
// 	return (0);
// }