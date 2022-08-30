/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:57:25 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/30 18:21:11 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split.c"
#include <stdio.h>
#include <unistd.h>

void putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int main(void)
{
	int i;
	int n;
	char **result;
	result = ft_split("bonjour je suis", " ");
	n = 0;
	i = 0;
	while(result[n])
	{
		putstr(result[n++]);

	}

	return 0;
}
