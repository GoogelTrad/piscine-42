/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:31:59 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/24 03:02:23 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
		n++;
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_len;
	int		total_len;
	int		i;
	char	*result;

	if (!size)
		return (malloc(0));
	sep_len = ft_strlen(sep);
	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i++ < size - 1)
			total_len += sep_len;
	}
	result = malloc(total_len);
	i = 0;
	while (i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i++ < size - 1)
			result = ft_strcat(result, sep);
	}
	return (result);
}
