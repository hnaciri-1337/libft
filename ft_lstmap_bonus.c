/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:57:20 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/09 15:12:39 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	new = 0;
	if (lst && f && del)
	{
		while (lst)
		{
			temp = ft_lstnew(f(lst->content));
			if (!temp)
			{
				ft_lstclear(&new, del);
				return (0);
			}
			ft_lstadd_back(&new, temp);
			lst = lst->next;
		}
		return (new);
	}
	if (!lst && f && del)
		new = malloc (sizeof(t_list));
	return (new);
}
