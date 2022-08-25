/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:27:18 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/25 17:09:23 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char **ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		n;
	int		str_len;

	i = 0;
	n = 0;
	str_len = ft_strlen(str);
	result = malloc(str_len + 1);
	while (str[n])
	{
		while (str[i] != charset[i])
		{
			result[n][i] = str[i]; 
			i++;
		}
		result[n][i] = charset[i];
		n++;
	}
	result[n][++i] = '\0';
	return (result);
}
