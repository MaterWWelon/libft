/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:57 by mbellini          #+#    #+#             */
/*   Updated: 2021/11/26 18:52:31 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	i = 0;
	while (s[i] != '\0')
		i++;
	dup = malloc(i * sizeof(char));
	if (!dup)
		return (NULL);
	while (i >= 0)
	{
		dup[i] = s[i];
		i--;
	}
	return (dup);
}
