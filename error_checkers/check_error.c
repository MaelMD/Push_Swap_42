/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:10:36 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:10:39 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/push_swap.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	check_error(int ac, char **av)
{
	if (!check_ifnumber(ac, av) ||!check_double(ac, av) \
			|| !check_iflong(ac, av))
		return (0);
	if (check_sort(ac, av))
		exit (1);
	return (1);
}
