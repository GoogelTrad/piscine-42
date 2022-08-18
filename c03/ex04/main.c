/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:33:49 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/17 14:36:12 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strstr.c"
#include <stdio.h>

int main(void)
{
	char str[] = "bonjour";
	char to_find[] = "jours";

	printf("%s", ft_strstr(str, to_find));

	return 0;
}
