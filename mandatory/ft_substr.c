/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 22:02:22 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/23 02:36:04 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	char	*sub;
	int		i;

	if (s && start > ft_strlen(s))
		len = 0;
	ss = (char *)s;
	if (ss)
	{
		if ((sub = (char *)malloc(sizeof(char) * (len + 1))) == 0)
			return (0);
		i = 0;
		while (len--)
			sub[i++] = ss[start++];
		sub[i] = '\0';
		return (sub);
	}
	return (0);
}
