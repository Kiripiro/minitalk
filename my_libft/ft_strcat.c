/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:28:04 by atourret          #+#    #+#             */
/*   Updated: 2021/06/04 13:53:20 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	j = ft_strlen(dest);
	i = -1;
	while (src[++i])
		dest[j + i] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
