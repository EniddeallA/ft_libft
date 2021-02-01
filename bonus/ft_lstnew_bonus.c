/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:02:48 by akhalid           #+#    #+#             */
/*   Updated: 2019/10/27 20:15:28 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *t;

	if (!(t = (t_list*)malloc(sizeof(t_list))))
		return (0);
	t->content = content;
	t->next = NULL;
	return (t);
}
