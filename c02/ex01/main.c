/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:50:54 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/18 09:43:30 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncpy.c"
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char dest[100000];
	char src[] = "bonjouur";

	ft_strncpy(dest, src, 4);
	printf("%s", dest);
	return 0;
}
