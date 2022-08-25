/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:18:28 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/22 14:30:46 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_range.c"
#include <stdlib.h>

int main()
{
	int **range;
	int i;
	int n;

	n = 0;
	i = ft_ultimate_range(range, 10, 28);
	while(n < i)
		printf("range = %d", range);
	return 0;
}
