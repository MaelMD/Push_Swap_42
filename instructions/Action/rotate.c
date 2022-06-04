/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:12:39 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:12:40 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Mandatory/push_swap.h"

int	rotate(t_list **lst)
{
	int	temp;

	temp = (*lst)->content;
	ft_lstadd_back(lst, ft_lstnew(temp));
	remove_first(lst);
	return (1);
}
