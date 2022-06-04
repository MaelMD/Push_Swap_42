/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:10:48 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:10:51 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	check_ifnumber(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (ft_isnumber(av[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_iflong(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (ft_atoi(av[i]) < (-2147483648) || ft_atoi(av[i]) > (2147483647))
			return (0);
		i++;
	}
	return (1);
}
