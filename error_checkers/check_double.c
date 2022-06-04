/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:10:25 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:10:27 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	check_double(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_memcmp(av[i], "", ft_strlen(av[i])))
			{
				if (ft_atoi(av[i]) == ft_atoi(av[j]))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
