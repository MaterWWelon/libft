/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:17:33 by mbellini          #+#    #+#             */
/*   Updated: 2021/11/29 10:41:56 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;
	size_t	r;

	i = 0;
	y = 0;
	while (dst[y])
		y++;
	r = y;
	while (src[i] && i < (size - 1))
	{
		dst[y] = src[i];
		i++;
		y++;
	}
	dst[y] = '\0';
	while (src[i])
		i++;
	return (r + i);
}
