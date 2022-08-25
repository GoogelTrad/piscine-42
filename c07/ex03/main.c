/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:18:28 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/25 14:52:25 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strjoin.c"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char **strs;
    char *result;
    char *sep;
	int i;
	int n;

	n = 0;
    strs = malloc(sizeof(char *) * 4);
    strs[0] = "coucou";
    strs[1] = "salut";
    strs[2] = "kuku\nrbitace";
    strs[3] = " ";
    sep = " ";
	result = ft_strjoin(4, strs, sep);
    printf("result = %s", result);
    free(result);
	return 0;
}
