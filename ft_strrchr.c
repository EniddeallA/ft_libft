/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:43:02 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/26 03:47:46 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ss;

	ss = (char *)s;
	i = ft_strlen(ss);
	while (i >= 0)
	{
		if (ss[i] == (char)c)
			return (&ss[i]);
		i--;
	}
	return (0);
}
