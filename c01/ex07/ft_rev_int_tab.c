/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:39:21 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/13 13:16:21 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	numb;

	numb = 0;
	while (numb < size / 2)
	{
		temp = tab[numb];
		tab[numb] = tab[size - numb - 1];
		tab[size - numb - 1] = temp;
		numb++;
	}
}
