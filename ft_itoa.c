/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:31:37 by mbellini          #+#    #+#             */
/*   Updated: 2021/11/29 12:34:37 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;
	while (n % 10 != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		i;
	int		size_n;

	i = 1;
	size_n = size(n);
	itoa = malloc((size_n + 1) * sizeof(char));
	if (!itoa)
		return (NULL);
	itoa[size_n] = 0;
	if (n == -2147483648)
		itoa = "-2147483648";
	else if (n < 0)
	{
		itoa[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		itoa[size_n - i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	return (itoa);
}
