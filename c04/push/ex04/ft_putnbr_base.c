/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:00:36 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/20 14:10:13 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	base_ok(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (!base_ok(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr == 0)
		return ;
	while (base[i] != '\0')
		i++;
	ft_putnbr_base((nbr / i), base);
	write(1, &base[nbr % i], 1);
}

int	base_ok(char *base)
{
	int	i;
	int	n;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		n = i + 1;
		if ((base[i] < 'a' || base[i] > 'z')
			&& (base[i] < '0' || base[i] > '9')
			&& (base[i] < 'A' || base[i] > 'Z'))
			return (0);
		while (base[n] != '\0')
		{
			if (base[i] == base[n])
				return (0);
			n++;
		}
		i++;
	}
	return (1);
}
