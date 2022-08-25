/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 03:08:50 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/25 15:05:12 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		convert_from(char *nbr, int base_len);
char	*convert_to(int nb, char *base_to, int base_len);
int		ft_pow(int nb, int power);
char	*ft_malloc(int *i, char *result, int nb);
char	*is_negative(int *nb, char *result);

int	ft_strlen(char *base)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base [i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	from_len;
	int	to_len;

	from_len = ft_strlen(base_from);
	to_len = ft_strlen(base_to);
	if (from_len <= 1 || to_len <= 1)
		return (NULL);
	return (convert_to(convert_from(nbr, from_len), base_to, to_len));
}

int	convert_from(char *nbr, int base_len)
{
	int	i;
	int	pow;
	int	result;
	int	n;
	int	pair;

	i = 0;
	n = 0;
	result = 0;
	pow = 0;
	pair = 1;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			pair *= -1;
		i++;
	}
	while (nbr[i + pow])
		pow++;
	while (nbr[i + n])
		result = result + ((nbr[i + n++] - 48) * ft_pow(base_len, --pow));
	return (result * pair);
}

int	ft_pow(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_pow(nb, power - 1));
}

char	*convert_to(int nb, char *base_to, int base_len)
{
	char	*result;
	int		i;
	int		temp;

	i = 0;
	temp = nb;
	if (nb < 0)
		i++;
	while (temp)
	{
		i++;
		temp /= base_len;
	}
	result = ft_malloc(&i, result, nb);
	result = is_negative(&nb, result);
	result[i] = '\0';
	while (nb)
	{
		result[--i] = base_to[nb % base_len];
		nb /= base_len;
	}
	return (result);
}
