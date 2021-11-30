/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:22:54 by mbellini          #+#    #+#             */
/*   Updated: 2021/11/30 18:00:37 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*trim;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (c_is_set(s1[start], set) == 1)
		start++;
	while (c_is_set(s1[end - 1], set) == 1)
		end--;
	trim = malloc((end - start) * sizeof(char *));
	while ((start + i) != end)
	{
		trim[i] = s1[start + i];
		i++;
	}
	trim[end] = 0;
	return (trim);
}
