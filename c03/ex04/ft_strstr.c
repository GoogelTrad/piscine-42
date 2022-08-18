/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:30:35 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/17 14:40:29 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{
		n = 0;
		if (str[i] == to_find[n])
		{
			while (str[i] == to_find[n] && to_find[n] != '\0')
			{
				i++;
				n++;
			}
			if (to_find[n] == '\0')
				return (to_find);
		}
		i++;
	}
	return (NULL);
}
