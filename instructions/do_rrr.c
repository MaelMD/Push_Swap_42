/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:14:52 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:14:53 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	do_rrr(t_list **stack_a, t_list **stack_b, int z)
{
	if (ft_lstsize(*stack_a) >= 2 && ft_lstsize(*stack_b) >= 2)
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		if (z == 1)
			write(1, "rrr\n", 4);
	}
	return (0);
}
