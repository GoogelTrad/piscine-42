/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:50:30 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/22 16:42:51 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
    int	result;

    result = 1;
    if (nb < 1)
        return (0);
    while ((result * result) < nb)
    {
        if (result > 46340)
            return (0);
        result++;
    }
    return (result);
}

int	ft_is_prime(int nb)
{
	int	result;

	result = ft_sqrt(nb);
	if (nb < 1)
		return (0);
	if ((nb % 2) == 0)
		return (0);
	while (result != 1)
	{
		if (nb % result != 0)
			result--;
		else
			return (0);
	}
	return (1);
}
