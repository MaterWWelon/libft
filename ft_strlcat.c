/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:17:33 by mbellini          #+#    #+#             */
/*   Updated: 2021/11/30 18:08:39 by mbellini         ###   ########.fr       */
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
	while (src[i] && i < (size - 1))
	{
		dst[y] = src[i];
		i++;
		y++;
	}
	dst[y] = '\0';
	printf("%zu\n", r + f);
	return (r + f);
}

//int main(){
//	char dst[] = "rrrrrr";
//	ft_strlcat(dst, "lorem ipsum dolor sit amet", 15);
//}
