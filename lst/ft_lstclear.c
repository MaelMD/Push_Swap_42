/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:16:38 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:16:40 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/push_swap.h"

void	ft_lstclear(t_list **stack)
{
	t_list	*fr;

	fr = *stack;
	while (fr)
	{
		*stack = fr->next;
		free(fr);
		fr = *stack;
	}
	free (stack);
}
