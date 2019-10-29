/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 22:31:25 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/21 15:30:15 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ss1;
	char	*ss2;
	char	*join;
	int		i;

	ss1 = (char *)s1;
	ss2 = (char *)s2;
	if (ss1 && ss2)
	{
		if ((join = (char *)malloc(sizeof(char) *
						(ft_strlen(ss1) + ft_strlen(ss2) + 1))) == 0)
			return (0);
		i = 0;
		while (*ss1)
			join[i++] = *ss1++;
		while (*ss2)
			join[i++] = *ss2++;
		join[i] = '\0';
		return (join);
	}
	return (0);
}
