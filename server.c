/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 11:11:52 by atourret          #+#    #+#             */
/*   Updated: 2021/06/04 14:20:19 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_cpt = 0;

void	handler(int signum)
{
	if (signum == SIGUSR1)
	{
		printf("0\n");
		g_cpt = g_cpt | 1;
	}
	if (signum == SIGUSR2)
	{
		printf("1\n");
		g_cpt = g_cpt | 2;
	}
}

int	main()
{
	int	id;
	struct sigaction action;

	id = getpid();
	ft_putnbr_fd(id, 1);
	write(1, "\n", 1);
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
		pause();
	return (EXIT_SUCCESS);
}
