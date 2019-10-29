/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:43:57 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/22 21:51:57 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nn;
	char c;

	nn = n;
	if (nn < 0)
	{
		write(fd, "-", 1);
		nn = -nn;
	}
	if (nn >= 10)
	{
		ft_putnbr_fd(nn / 10, fd);
		c = nn % 10 + '0';
		write(fd, &c, 1);
	}
	else
	{
		c = nn + '0';
		write(fd, &c, 1);
	}
}
