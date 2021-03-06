/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:15:19 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:15:20 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	do_sb(t_list **stack_b, int z)
{
	if (ft_lstsize(*stack_b) >= 2)
	{
		swap(stack_b);
		if (z == 1)
			write(1, "sb\n", 3);
	}
	return (0);
}
