/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:29:05 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/27 20:13:28 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;

	if (lst && del)
	{
		tmp = *lst;
		while (tmp != NULL)
		{
			*lst = tmp->next;
			ft_lstdelone(tmp, del);
			tmp = *lst;
		}
		lst = NULL;
	}
}
