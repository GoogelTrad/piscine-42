/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:00:36 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/18 19:16:13 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	reste;

	i = 0;
	reste = 0;

	while (base[i] != '\0')
		i++;
	while (nbr != 0)
	{
		write(1, &base[nbr % i], 1);
		nbr /= i;
		ft_putnbr_base(nbr / 10, base);
	}
}	
