/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:08:15 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:08:16 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/push_swap.h"

int	top_number(t_list **stack)
{
	t_list	*temp;
	int		top;

	temp = *stack;
	top = temp->content;
	while (temp)
	{
		if (top < temp->content)
			top = temp->content;
		temp = temp->next;
	}
	return (top);
}

int	bottom_number(t_list **stack)
{
	t_list	*temp;
	int		bottom;

	temp = *stack;
	bottom = temp->content;
	while (temp)
	{
		if (bottom > temp->content)
			bottom = temp->content;
		temp = temp->next;
	}
	return (bottom);
}

int	middle_number(t_list **stack)
{
	t_list	*temp;
	int		top;
	int		bottom;

	temp = *stack;
	top = top_number(stack);
	bottom = bottom_number(stack);
	while (temp)
	{
		if (temp->content != top && temp->content != bottom)
			return (temp->content);
		temp = temp->next;
	}
	return (0);
}

void	sort_three(t_list **stack)
{
	int	top;
	int	middle;
	int	bottom;

	top = top_number(stack);
	middle = middle_number(stack);
	bottom = bottom_number(stack);
	while (!stack_a_is_sorted(stack))
	{
		if ((*stack)->content == middle && (*stack)->next->content == bottom)
			do_sa(stack, 1);
		if ((*stack)->content == top && (*stack)->next->content == middle)
			do_sa(stack, 1);
		if ((*stack)->content == top && (*stack)->next->content == bottom)
			do_ra(stack, 1);
		if ((*stack)->content == bottom && (*stack)->next->content == top)
			do_sa(stack, 1);
		if ((*stack)->content == middle && (*stack)->next->content == top)
			do_rra(stack, 1);
	}
}
