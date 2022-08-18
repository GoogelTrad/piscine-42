/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:46:47 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/16 18:05:12 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_uppercase.c"
#include <stdio.h>

int main(void)
{
	char *str;
	int n;

	str = "BONJOuR";
	n = ft_str_is_uppercase(str);

	printf("n = %d\n", n);

	return 0;
}
