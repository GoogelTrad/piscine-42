/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:16:31 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/25 15:10:11 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	n;

	i = 0;
	n = min;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	while (i < (max - min))
	{
		tab[i] = n;
		i++;
		n++;
	}
	return (tab);
}
