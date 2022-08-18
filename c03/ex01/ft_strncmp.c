/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:15:59 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/17 13:22:20 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	premier;
	int	deuxieme;

	i = 0;
	premier = 0;
	deuxieme = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		premier = premier + s1[i];
		deuxieme = deuxieme + s2[i];
		i++;
	}
	if (premier > deuxieme)
		return (1);
	else
		return (0);
}
