/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:43:56 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/03 16:14:30 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_malloc1(char const *s, char c)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	if (count == 0)
		count = 1;
	return (count);
}

static char	*cpy(char *s, int len)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = malloc(len * sizeof(char *));
	if (!cpy)
		return (NULL);
	while (i < len - 1)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		pos;
	int		mem;
	char	**split;

	i = 0;
	pos = 0;
	mem = 0;
	split = malloc((nb_malloc1(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (s[i] && pos < nb_malloc1(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		mem = i;
		while (s[i] != c && s[i])
			i++;
		split[pos] = cpy((char *)s + mem, i - mem + 1);
		pos++;
	}
	split[pos] = 0;
	return (split);
}
