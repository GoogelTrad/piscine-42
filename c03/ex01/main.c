/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:59:40 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/16 13:52:07 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncmp.c"
#include <stdio.h>

int main(void)
{
	char *s1;
	char *s2;
	int n = 0;

	s1 = "Totoooo";
	s2 = "toto";

	n = ft_strncmp(s1, s2, 3);

	printf("n = %d\n", n);
	return 0;

}
