/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:27:56 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/26 03:45:37 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned	char	*ss;

	ss = (unsigned char*)s;
	if (n)
	{
		while (n--)
			if (*ss++ == (unsigned char)c)
				return (ss - 1);
	}
	return (0);
}
