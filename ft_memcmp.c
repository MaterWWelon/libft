/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:42:19 by mbellini          #+#    #+#             */
/*   Updated: 2021/11/29 15:21:22 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		if (((char *)s1)[i] < ((char *)s2)[i])
			return ((-(((char *)s2)[i] - ((char *)s1)[i])) * 256);
		if (((char *)s1)[i] > ((char *)s2)[i])
			return ((((char *)s1)[i] - ((char *)s2)[i]) * 256);
		i++;
		n--;
	}
	return (0);
}
