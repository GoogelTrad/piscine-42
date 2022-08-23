/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:23:55 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/21 14:36:22 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_iterative_factorial.c"

int main(void)
{
	printf("Le resultat est : %d\n", ft_iterative_factorial(5));
	return 0;
}
