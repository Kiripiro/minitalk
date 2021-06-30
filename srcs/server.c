/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 11:11:52 by atourret          #+#    #+#             */
/*   Updated: 2021/06/07 15:51:23 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/minitalk.h"

void	handler(int signal)
{
	static int	i = 0;
	char		c;
	static char	s[9];

	if (signal == SIGUSR1)
	{
		s[i] = '1';
		i++;
	}
	else if (signal == SIGUSR2)
	{
		s[i] = '0';
		i++;
	}
	if (i == 8)
	{
		i = 0;
		c = ft_atoi_base(s, "01");
		write (1, &c, 1);
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
		pause();
	ft_putchar_fd('\n', 1);
	return (0);
}
