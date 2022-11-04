/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:55:36 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/09 16:21:09 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (lst && new)
	{
		p = *lst;
		new->next = 0;
		if (p == 0)
		{
			*lst = new;
			return ;
		}
		while (p->next != 0)
			p = p->next;
		p->next = new;
	}
}
