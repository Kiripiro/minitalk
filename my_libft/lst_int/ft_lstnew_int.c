/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 09:12:13 by atourret          #+#    #+#             */
/*   Updated: 2021/06/02 13:50:23 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list_int	*ft_lstnew_int(int content)
{
	t_list_int	*new;

	new = (t_list_int *)malloc(sizeof(t_list_int));
	if (!new)
		return (0);
	new->content = content;
	new->rank = 0;
	new->next = NULL;
	return (new);
}
