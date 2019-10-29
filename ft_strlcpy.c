/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:22:28 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/29 14:59:02 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*s;
	int		i;

	i = (int)size;
	s = (char *)src;
	while (--i > 0 && *s)
		*dst++ = *s++;
	if (size > 0)
		*dst = '\0';
	return (ft_strlen(src));
}
