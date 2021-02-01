/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:46:00 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/29 14:56:24 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	if (!d && !s)
		return (0);
	if (d != s)
	{
		if (d > s && d < s + len)
		{
			s += len - 1;
			d += len - 1;
			while (len--)
				*d-- = *s--;
		}
		else
			while (len--)
				*d++ = *s++;
	}
	return (dst);
}
