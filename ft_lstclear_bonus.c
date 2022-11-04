/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:41:36 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/08 14:25:46 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*begin;
	t_list	*next;

	if (lst)
	{
		begin = *lst;
		while (begin)
		{
			next = begin->next;
			ft_lstdelone(begin, del);
			begin = next;
		}
	}
	*lst = 0;
}
