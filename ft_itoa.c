/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:31:37 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/03 14:08:38 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
		size++;
	if (n == 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	size_t	size_n;

	size_n = size(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	itoa = malloc((size_n + 1) * sizeof(char));
	if (!itoa)
		return (NULL);
	itoa[size_n] = '\0';
	if (n < 0)
	{
		itoa[0] = '-';
		n *= -1;
	}
	while (size_n-- > 0 && itoa[size_n] != '-')
	{
		itoa[size_n] = (n % 10) + 48;
		n /= 10;
	}
	return (itoa);
}
