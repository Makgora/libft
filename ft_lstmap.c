/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tparand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:42:21 by tparand           #+#    #+#             */
/*   Updated: 2017/11/21 15:55:08 by tparand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*p_new;

	new = f(lst);
	p_new = new;
	if (!new)
		return (NULL);
	while (lst != NULL)
	{
		lst = lst->next;
		p_new->next = f(lst);
		p_new = p_new->next;
	}
	return (new);
}
