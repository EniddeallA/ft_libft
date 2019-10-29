/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:39:25 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/23 01:07:23 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		wordcount(char *s, char c)
{
	int wc;

	if (!*s)
		return (0);
	wc = 0;
	while (*s)
	{
		if ((*s != c) && (*(s + 1) == c || *(s + 1) == '\0'))
			wc++;
		s++;
	}
	return (wc);
}

static	int		*wordlength(char *s, char c, int wc)
{
	int *wl;
	int i;

	if (((wl = (int*)malloc(sizeof(int) * wc)) == 0) || !s)
		return (0);
	i = 0;
	while (*s && wc--)
	{
		wl[i] = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			s++;
			wl[i]++;
		}
		i++;
	}
	return (wl);
}

static	void	*garbage(char **split, int i)
{
	while (i >= 0)
		free(split[i--]);
	return (0);
}

static	char	**spliit(char *ss, char c, char **split, int wc)
{
	int i;
	int j;
	int *wl;

	i = 0;
	if ((wl = wordlength(ss, c, wc)) == 0)
		return (0);
	while (i < wc)
	{
		j = 0;
		while (*ss == c)
			ss++;
		if (*ss != c && *ss)
		{
			if ((split[i] = (char*)malloc(wl[i] + 1)) == 0)
				return (garbage(split, i));
			while (*ss != c && *ss)
				split[i][j++] = *ss++;
			split[i][j] = '\0';
		}
		i++;
	}
	split[i] = 0;
	return (split);
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	char	*ss;
	int		wc;

	ss = (char *)s;
	if (!ss)
		return (0);
	wc = wordcount(ss, c);
	if (((split = (char**)malloc(sizeof(char*) * (wc + 1))) == 0))
		return (0);
	return (spliit(ss, c, split, wc));
}
