/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:14:39 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:14:40 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	do_rrb(t_list **stack_b, int z)
{
	if (ft_lstsize(*stack_b) >= 2)
	{
		reverse_rotate(stack_b);
		if (z == 1)
			write(1, "rrb\n", 4);
	}
	return (0);
}
