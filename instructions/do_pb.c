/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:13:19 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:13:21 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	do_pb(t_list **stack_a, t_list **stack_b, int z)
{
	if (ft_lstsize(*stack_a) != 0)
	{
		ft_lstadd_front(stack_b, ft_lstnew((*stack_a)->content));
		remove_first(stack_a);
		if (z == 1)
			write(1, "pb\n", 3);
	}
	return (0);
}
