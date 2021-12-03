/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:17:33 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/03 16:33:31 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;
	size_t	r;
	size_t	f;

	f = ft_strlen(src);
	i = 0;
	y = ft_strlen(dst);
	r = y;
	if (size <= y)
		return (f + size);
	while (src[i] && i < (size - y - 1))
	{
		dst[y + i] = src[i];
		i++;
	}
	dst[y + i] = '\0';
	return (r + f);
}
