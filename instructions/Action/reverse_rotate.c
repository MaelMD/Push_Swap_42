/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:12:29 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:12:30 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Mandatory/push_swap.h"

int	reverse_rotate(t_list **lst)
{
	int	last;

	last = ft_lstlast(*lst)->content;
	ft_lstadd_front(lst, ft_lstnew(last));
	remove_last(lst);
	return (1);
}
