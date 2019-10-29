/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:49:08 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/18 17:35:12 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long res;
	long sign;

	res = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' ||
		*str == '\f' || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if ((unsigned long)__LONG_MAX__ < ((unsigned long)res * 10 + (*str -
						'0')) && sign == 1)
			return (-1);
		else if ((unsigned long)__LONG_MAX__ < ((unsigned long)res * 10 +
					(*str - '0')) && sign == -1)
			return (0);
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
