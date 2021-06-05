/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:55:39 by atourret          #+#    #+#             */
/*   Updated: 2021/06/02 11:40:50 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*obj;
	int		i;

	i = 0;
	obj = (char *)malloc(sizeof(char) * (count * size));
	if (!obj)
		return (0);
	ft_bzero(obj, count * size);
	return (obj);
}
