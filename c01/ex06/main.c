/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:19:48 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/13 12:38:25 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include <stdio.h>

int main(void)
{
	int len = 0;
	char *str = "pouet";
	len = ft_strlen(str);
	printf("Longueur de : %d\n", len);
	return (0);
}
