/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:50:05 by atourret          #+#    #+#             */
/*   Updated: 2021/06/07 15:51:12 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/minitalk.h"

void	error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(0);
}

void	send_newline(int pid_serv)
{
	char	c;
	int		i;

	i = 0;
	c = '\n';
	while (i < 8)
	{
		if ((c >> (7 - i)) & 1)
		{
			kill(pid_serv, SIGUSR1);
			usleep(100);
		}
		else
		{
			kill(pid_serv, SIGUSR2);
			usleep(100);
		}
		i++;
	}
}

void	send_data(int pid_serv, char *s)
{
	int	i;

	while (*s)
	{
		i = 0;
		while (i < 8)
		{
			if ((*s >> (7 - i)) & 1)
			{
				if (kill(pid_serv, SIGUSR1) == 0)
					usleep(250);
				else
					error("This is a wrong pid\n");
			}
			else
			{
				if (kill(pid_serv, SIGUSR2) == 0)
					usleep(250);
				else
					error("This is a wrong pid\n");
			}
			i++;
		}
		s++;
	}
}

int	main(int ac, char **av)
{
	pid_t	pid;

	if (ac != 3)
		error("PID and string needed.\n");
	pid = atoi(av[1]);
	send_data(pid, av[2]);
	send_newline(pid);
	ft_putstr_fd("Data sent.\n", 1);
	return (EXIT_SUCCESS);
}
