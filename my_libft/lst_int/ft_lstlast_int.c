/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:55:39 by atourret          #+#    #+#             */
/*   Updated: 2021/06/02 13:55:42 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list_int 	*ft_lstlast_int(t_list_int *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

t_list_int 	*ft_lstn(t_list_int *lst, int n)
{
	int	limit;

	limit = 1;
	if (!lst)
		return (NULL);
	while (limit++ < n && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
