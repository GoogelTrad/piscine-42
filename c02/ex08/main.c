/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:46:47 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/16 18:16:58 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlowcase.c"
#include <stdio.h>

int main(void)
{
	char *str;
	char *str2;
	int i = 0;

	str = "bonjour";
	str2 = ft_strlowcase(str);

	while(str2[i])
	{
		printf("str2 = %c\n", str2[i]);
		i++;
	}

	return 0;
}
