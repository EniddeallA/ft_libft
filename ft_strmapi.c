/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:20:50 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/21 15:30:32 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ss;
	char	*str;
	int		l;
	int		i;

	ss = (char *)s;
	if (ss)
	{
		l = ft_strlen(ss);
		if ((str = (char *)malloc(sizeof(char) * (l + 1))) == 0)
			return (0);
		i = 0;
		while (i < l)
		{
			str[i] = f(i, ss[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
