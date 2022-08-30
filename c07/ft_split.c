/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:48:57 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/30 19:04:22 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		char_is_sep(char c, char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		if (sep[i++] == c)
		{
			write(1, "bonjour", 7);
			return (1);
		}
	}
	return (0);
}

int		count_words(char *str, char *sep)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (char_is_sep(str[i], sep))
			i++;
		if (!char_is_sep(str[i], sep) && str[i])
			nb++;
		while(!char_is_sep(str[i], sep) && str[i])
			i++;
	}
	return (nb);
}

char	**ft_split(char *str, char *charset)
{
	char **split;
	int i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	j = 0;
	split = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	while(str[i])
	{
		split[n][j++] = str[i];
		if(char_is_sep(str[i], charset))
		{
			n++;
			j = 0;
		}
		i++;
	}
	split[n + 1] = 0;
	return (split);
}
