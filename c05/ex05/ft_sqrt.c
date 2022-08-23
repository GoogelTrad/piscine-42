/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:45:19 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/21 17:50:03 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb < 1)
		return (0);
	while ((result * result) != nb)
	{
		if (result > 46340)
			return (0);
		result++;
	}
	return (result);
}