/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:22:54 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/03 16:40:16 by mbellini         ###   ########.fr       */
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

static char	*erreur(void)
{
	char	*ptr;

	ptr = malloc(1 * sizeof(char));
	ptr[0] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		start;
	size_t		end;
	char		*trim;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && c_is_set(s1[start], set) == 1)
		start++;
	if (start == ft_strlen(s1))
		return (erreur());
	while (c_is_set(s1[end], set) == 1)
		end--;
	trim = malloc((end - start + 2) * sizeof(char));
	if (!trim)
		return (NULL);
	while (i <= (end - start))
	{
		trim[i] = s1[start + i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
