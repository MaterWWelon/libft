/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:42:19 by mbellini          #+#    #+#             */
/*   Updated: 2021/11/30 15:02:10 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (n > 0)
	{
		if (ptr1[i] < ptr2[i])
			return (-(ptr2[i] - ptr1[i]) * 256);
		if (ptr1[i] > ptr2[i])
			return ((ptr1[i] - ptr2[i]) * 256);
		i++;
		n--;
	}
	return (0);
}
