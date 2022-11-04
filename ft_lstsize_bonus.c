/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:21:13 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/07 14:34:47 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*begin;
	int		size;

	size = 0;
	begin = lst;
	if (begin == 0)
		return (0);
	size++;
	while (begin->next != 0)
	{
		size++;
		begin = begin->next;
	}
	return (size);
}
