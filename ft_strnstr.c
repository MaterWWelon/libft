/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:09:41 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/03 13:12:01 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i] && i < len)
	{
		ptr = (char *)big + i;
		j = 0;
		while ((little[j] == big[i] && i < len) || little[j] == '\0')
		{
			if (little[j] == '\0')
				return (ptr);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
