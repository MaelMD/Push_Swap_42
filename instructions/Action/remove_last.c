/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:12:18 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:12:20 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Mandatory/push_swap.h"

void	remove_last(t_list **lst)
{
	t_list	*pre_last;
	t_list	*last;

	last = ft_lstlast(*lst);
	pre_last = ft_pre_last (lst);
	free(last);
	pre_last->next = NULL;
}
