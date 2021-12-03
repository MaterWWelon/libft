/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:17:25 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/03 16:38:19 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (len >= ft_strlen(s))
		ft_strlen(s);
	while (s[start + i] && i < len)
		i++;
	sub = malloc(i * sizeof(char) + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s) && s[i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
