/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:09:39 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/15 14:39:04 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_numeric.c"

int main(void)
{
	char *str;
	int n;

	str = "";
	n = ft_str_is_numeric(str);

	printf("n = %d\n", n);

	return 0;
}
