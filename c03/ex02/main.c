/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:08:22 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/17 13:16:10 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcat.c"
#include <stdio.h>

int main(void)
{
	char dest[500] = "bonjour";
	char src[500] = "tout le monde";

	ft_strcat(dest, src);
	printf("%s", dest);
	return 0;

}
