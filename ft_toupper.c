/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:06:57 by mbellini          #+#    #+#             */
/*   Updated: 2021/12/03 12:33:40 by mbellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char r;

	r = (unsigned char)c;
	if (c == -1)
		return (-1);
	if ((r >= 'a' && r <= 'z'))
		r -= 32;
	return (r);
}
