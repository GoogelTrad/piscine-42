/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:08:22 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/17 13:29:12 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncat.c"
#include <stdio.h>

int main(void)
{
	char dest[500] = "bonjour";
	char src[500] = "tout le monde";

	ft_strncat(dest, src, 5);
	printf("%s", dest);
	return 0;

}
