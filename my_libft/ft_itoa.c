/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:33:22 by atourret          #+#    #+#             */
/*   Updated: 2021/06/02 11:42:37 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int nb)
{
	unsigned int	result;
	int				i;

	i = 1;
	if (nb < 0)
	{
		i++;
		result = nb * -1;
	}
	else
		result = nb;
	while (result / 10 > 0)
	{
		result /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				size;
	char			*num;
	unsigned int	nb;

	size = ft_count(n);
	num = (char *)malloc(sizeof(char) * size + 1);
	if (!num)
		return (0);
	if (n == 0)
		num[0] = '0';
	if (n < 0)
	{
		num[0] = '-';
		nb = n * -1;
	}
	else
		nb = n;
	num[size] = 0;
	while (nb > 0)
	{
		num[--size] = nb % 10 + '0';
		nb /= 10;
	}
	return (num);
}
