/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:48:57 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/20 17:53:42 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	char	*dp;
	int		i;

	s = (char *)s1;
	if ((dp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))) == 0)
		return (0);
	if (!s)
	{
		*dp = '\0';
		return (dp);
	}
	i = 0;
	while (*s)
	{
		dp[i] = *s;
		s++;
		i++;
	}
	dp[i] = '\0';
	return (dp);
}
