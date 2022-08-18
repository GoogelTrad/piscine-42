/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:46:47 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/16 18:13:08 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_printable.c"
#include <stdio.h>

int main(void)
{
	char *str;
	int n;

	str = "bonjour";
	n = ft_str_is_printable(str);

	printf("n = %d\n", n);

	return 0;
}
