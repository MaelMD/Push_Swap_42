/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:12:46 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:12:53 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../../Mandatory/push_swap.h"

int	swap(t_list **lst)
{
	int	temp;
	int	temp2;

	if ((*lst)->next)
	{
		temp = (*lst)->content;
		temp2 = (*lst)->next->content;
		(*lst)->content = temp2;
		(*lst)->next->content = temp;
	}
	else
		return (0);
	return (1);
}
