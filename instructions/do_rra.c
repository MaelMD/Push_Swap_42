/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:14:27 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:14:29 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	do_rra(t_list **stack_a, int z)
{
	if (ft_lstsize(*stack_a) >= 2)
	{
		reverse_rotate(stack_a);
		if (z == 1)
			write(1, "rra\n", 4);
	}
	return (0);
}
