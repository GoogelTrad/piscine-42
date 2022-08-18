/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:44:16 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/11 13:49:22 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numb(char p_digit, char d_digit, char t_digit);

void	ft_print_comb(void)
{
	char	p_digit;
	char	d_digit;
	char	t_digit;

	p_digit = '0';
	while (p_digit <= '9')
	{
		d_digit = p_digit + 1;
		while (d_digit <= '9')
		{
			t_digit = d_digit + 1;
			while (t_digit <= '9')
			{
				print_numb(p_digit, d_digit, t_digit);
				t_digit++;
			}
			d_digit++;
		}
		p_digit++;
	}	
}

void	print_numb(char p_digit, char d_digit, char t_digit)
{
	write(1, &p_digit, 1);
	write(1, &d_digit, 1);
	write(1, &t_digit, 1);
	if (p_digit != '7')
	{
		write(1, ", ", 2);
	}
}
