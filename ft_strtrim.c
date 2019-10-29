/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:11:56 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/22 23:24:38 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_cstrim(char *s2, char *s3)
{
	int		size;
	char	*trim;
	int		i;

	size = (unsigned long)s3 - (unsigned long)s2 + 1;
	if ((trim = (char*)malloc(size + 1)) == 0)
		return (0);
	i = 0;
	while (s2 < s3)
		trim[i++] = *s2++;
	trim[i++] = *s2;
	trim[i] = '\0';
	return (trim);
}

static	char	*f(void)
{
	char *s;

	if ((s = malloc(1)) == 0)
		return (0);
	*s = '\0';
	return (s);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	char	*s3;
	int		i;

	if (!s1 || !set)
		return (0);
	s2 = (char*)s1;
	s3 = (char*)s1 + ft_strlen(s1) - 1;
	i = -1;
	while (*s2 && set[++i])
		if (*s2 == set[i])
		{
			s2++;
			i = -1;
		}
	i = -1;
	while (s3 != (char*)s1 && set[++i])
		if (*s3 == set[i])
		{
			s3--;
			i = -1;
		}
	return (!*s2 ? f() : ft_cstrim(s2, s3));
}
