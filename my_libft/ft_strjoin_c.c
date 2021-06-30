/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:48:33 by atourret          #+#    #+#             */
/*   Updated: 2021/06/07 15:27:32 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_c(char *s1, char c)
{
	char	*s;
	int		i;

	s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 2));
	if (!s)
		return (NULL);
	s[ft_strlen(s1) + 1] = '\0';
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = c;
	s[i + 1] = '\0';
	if (s1)
	{
		free(s1);
		s1 = NULL;
	}
	return (s);
}
