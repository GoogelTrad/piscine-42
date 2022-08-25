/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 02:53:16 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/25 15:05:10 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_malloc(int *i, char *result, int nb)
{
	if (nb)
		result = malloc(*i + 1);
	else
	{
		result = malloc(2);
		result[0] = '0';
		i++;
	}
	return (result);
}

char	*is_negative(int *nb, char *result)
{
	if (*nb < 0)
	{
		result[0] = '-';
		*nb *= -1;
	}
	return (result);
}
