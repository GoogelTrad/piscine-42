/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:46:47 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/16 11:33:32 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strupcase.c"
#include <stdio.h>

int main(void)
{
	char *str;
	char *str2;
	int i = 0;

	str = "bonjour";
	printf("pouet2\n");
	ft_strupcase(str);

	/*
	while(str[i])
	{
		printf("pouet\n");
		//printf("str2 = %c\n", str[i]);
		i++;
	}*/

	return 0;
}
