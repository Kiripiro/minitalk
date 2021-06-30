/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <atourret@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:15:48 by atourret          #+#    #+#             */
/*   Updated: 2021/06/07 15:51:38 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	verif_base(char *base)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (base[++i])
	{
		if ((base[i] == '+' || base[i] == '-') || \
				(base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
	}
	return (i);
}

int	is_ok(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	convert(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	j = verif_base(base);
	if (j < 2)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && (is_ok(base, str[i]) == 1))
	{
		nb = nb * j + convert(str[i], base);
		i++;
	}
	return (sign * nb);
}
