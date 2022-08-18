/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:26:16 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/14 12:02:34 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numb(char p_digit, char d_digit, char t_digit, char q_digit);

void	ft_print_comb2(void)
{
	char	p_digit;
	char	d_digit;
	char	t_digit;
	char	q_digit;

	p_digit = '0';
	while (p_digit <= '9')
	{
		d_digit = '0';
		while (d_digit <= '9')
		{
			t_digit = p_digit;
			while (t_digit <= '9')
			{
				q_digit = d_digit + 1;
				while (q_digit <= '9')
					print_numb(p_digit, d_digit, t_digit, q_digit++);
				t_digit++;
			}
			d_digit++;
		}
		p_digit++;
	}
}

void	print_numb(char p_digit, char d_digit, char t_digit, char q_digit)
{
	write(1, &p_digit, 1);
	write(1, &d_digit, 1);
	write(1, " ", 1);
	write(1, &t_digit, 1);
	write(1, &q_digit, 1);
	if (p_digit != '9' || d_digit != '8')
	{
		write(1, ", ", 2);
	}
}
