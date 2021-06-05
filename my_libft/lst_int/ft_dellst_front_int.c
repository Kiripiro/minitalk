/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dellst_front_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:54:19 by atourret          #+#    #+#             */
/*   Updated: 2021/06/02 13:54:21 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dellst_front_int(t_list_int **list)
{
	t_list_int	*tmp;

	if (list == NULL)
		return ;
	tmp = (*list)->next;
	free(*list);
	*list = tmp;
}
