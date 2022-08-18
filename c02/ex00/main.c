/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:50:54 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/16 16:04:05 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.c"
#include <unistd.h>

int main(void)
{
	char *dest;
	char *src = "salut";

	dest = ft_strcpy(dest, src);

	while(*dest)
		write(1, dest++, 1);
	return 0;
}
