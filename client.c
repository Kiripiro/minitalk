/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 11:39:11 by atourret          #+#    #+#             */
/*   Updated: 2021/06/04 14:17:42 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

char	*stringToBinary(char *s)
{
	char	*binary;
	char	c;
	size_t	len;
	size_t	i;
	int		j;

	if(s == NULL)
		return (0);
	i = -1;
	len = ft_strlen(s);
	binary = malloc(len * 8 + 1);
	while (++i < len)
	{
		j = 7;
		c = s[i];
		while (j >= 0)
		{
			if (c & (1 << j))
				ft_strcat(binary, "1");
			else
				ft_strcat(binary, "0");
			--j;
		}
	}
	return (binary);
}

int main(int ac, char *av[])
{
	int		id;
	int		i;
	int		j;
	char	*binary;

	if (ac != 3) {
	  exit(EXIT_FAILURE);
	}
	j = -1;
	i = -1;
	id = atoi(av[1]);
	binary = stringToBinary(av[2]);
	dprintf(1, "%s\n", binary);
	while (binary[++j])
	{
		if (binary[j] == '0')
		{
			if (kill(id, SIGUSR1) == -1)
			{
		 		perror("Erreur lors de l'envoi du signal ");
		  		exit(EXIT_FAILURE);
			}
			usleep(300);
		}
		else
		{
			if (kill(id, SIGUSR2) == -1)
			{
				perror("Erreur lors de l'envoi du signal ");
				exit(EXIT_FAILURE);
			}
			usleep(300);
		}
	}
	return EXIT_SUCCESS;
}
 