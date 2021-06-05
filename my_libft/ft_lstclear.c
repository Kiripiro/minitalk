/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:31:00 by atourret          #+#    #+#             */
/*   Updated: 2021/06/02 11:42:56 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	current = *lst;
	temp = 0;
	while (current)
	{
		if (current->next)
			temp = current->next;
		else
			temp = 0;
		del(current->content);
		free(current);
		current = temp;
	}
	*lst = 0;
}
