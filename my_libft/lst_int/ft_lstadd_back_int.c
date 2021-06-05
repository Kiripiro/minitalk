/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:20:53 by ldauga            #+#    #+#             */
/*   Updated: 2021/06/02 13:48:54 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back_int(t_list_int **list, int value)
{
	t_list_int	*new;
	t_list_int	*tmp;

	new = malloc(sizeof(*new));
	if (new == NULL)
		exit(EXIT_FAILURE);
	if (*list == NULL)
	{
		new->content = value;
		new->next = NULL;
		*list = new;
		return ;
	}
	else
	{
		new->content = value;
		new->next = NULL;
		tmp = *list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
