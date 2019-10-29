/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:48:39 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/27 20:14:13 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *tmp;

	if (lst && f)
	{
		tmp = lst;
		while (tmp->next != NULL)
		{
			f(tmp->content);
			tmp = tmp->next;
		}
		f(tmp->content);
	}
}
