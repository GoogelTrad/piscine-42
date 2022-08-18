/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:20:25 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/15 20:06:40 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcapitalize.c"
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *str;
	char *str2;

	str = "bonjour, comment tu vas ?";
	str2 = ft_strcapitalize(str);

	while(*str2)
		write(1, str2++, 1);
	return 0;
}
