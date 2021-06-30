/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:53:17 by atourret          #+#    #+#             */
/*   Updated: 2021/06/07 15:55:06 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(unsigned int n, char *base)
{
	char			*str;
	unsigned int	i;

	i = ft_strlen(base);
	str = (char *)malloc(sizeof(char) * 2);
	if (!(str))
		return (0);
	if (n >= i)
		str = ft_strjoin(ft_itoa_base(n / i, base), \
		ft_itoa_base(n % i, base), 0, 0);
	else if (n < i)
	{
		str[0] = base[n];
		str[1] = '\0';
	}
	return (str);
}
