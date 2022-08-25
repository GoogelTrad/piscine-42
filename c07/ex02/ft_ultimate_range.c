/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:07:54 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/25 15:10:23 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	n;

	i = 0;
	n = min;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * (max - min));
	while (i < (max - min))
	{
		range[0][i] = n;
		n++;
		i++;
	}
	return (max - min);
}
