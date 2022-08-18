/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:38:58 by cmichez           #+#    #+#             */
/*   Updated: 2022/08/15 14:37:51 by cmichez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		verif;

	verif = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			verif = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			verif = 1;
		else
			return (0);
		i++;
	}
	return (verif);
}
