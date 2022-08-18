/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:49:23 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/14 10:53:23 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		print_letter(int temp_x, int temp_y, int x, int y);

void	rush(int x, int y)
{
	int	temp_x;
	int	temp_y;

	temp_y = 0;
	if (x <= 0 || y <= 0)
	{
		x = 0;
		y = 0;
	}
	while (temp_y != y)
	{
		temp_x = 0;
		while (temp_x != x)
		{
			temp_x = print_letter(temp_x, temp_y, x, y);
			temp_x++;
		}
		ft_putchar('\n');
		temp_y++;
	}
}

int	print_letter(int temp_x, int temp_y, int x, int y)
{
	if (temp_x == 0 && (temp_y == 0 || temp_y == (y - 1)))
		ft_putchar('A');
	else if (temp_x == (x - 1) && (temp_y == 0 || temp_y == (y - 1)))
		ft_putchar('C');
	else if (temp_x != 0 && temp_x != (x - 1))
	{
		if (temp_y == 0 || temp_y == (y - 1))
			ft_putchar('B');
	}
	else if (temp_y != 0 || temp_y != (y - 1))
	{
		ft_putchar('B');
		while (temp_x != (x - 2))
		{
			ft_putchar(' ');
			temp_x++;
		}
		ft_putchar('B');
		temp_x = x - 1;
	}
	return (temp_x);
}
