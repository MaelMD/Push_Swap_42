/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:13:08 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:13:10 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/push_swap.h"

int	do_pa(t_list **stack_b, t_list **stack_a, int z)
{
	if (ft_lstsize(*stack_b) != 0)
	{
		ft_lstadd_front(stack_a, ft_lstnew((*stack_b)->content));
		remove_first(stack_b);
		if (z == 1)
			write(1, "pa\n", 3);
	}
	return (0);
}
