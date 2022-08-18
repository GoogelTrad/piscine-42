/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:25:08 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/15 14:35:22 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_alpha.c"
#include <stdio.h>

int main(void)
{
	char *str;
	int n;

	str = "bonjou9990r";
	n = ft_str_is_alpha(str);

	printf("n = %d\n", n);

	return (0);
}
