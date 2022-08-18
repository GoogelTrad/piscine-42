/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:17:46 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/15 11:11:01 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	numb;
	int	reini_nb;

	numb = 0;
	temp = 0;
	reini_nb = 0;
	while (numb != size)
	{
		if (tab[numb] > tab[numb + 1])
		{
			temp = tab[numb + 1];
			tab[numb + 1] = tab[numb];
			tab[numb] = temp;
			reini_nb = 1;
		}	
		numb++;
		if (reini_nb == 1)
		{
			numb = 0;
			reini_nb = 0;
		}
	}
	for(int i = 0; i<size;i++)
		printf("%d", tab[i]);
}
