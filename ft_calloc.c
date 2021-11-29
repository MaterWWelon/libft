/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:51:25 by mbellini          #+#    #+#             */
/*   Updated: 2021/11/29 12:34:18 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*tab;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	while (i < nmemb)
	{
		tab[i] = 48;
		i++;
	}
	return ((void *)tab);
}
