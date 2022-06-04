/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:11:00 by mmohamme          #+#    #+#             */
/*   Updated: 2022/04/17 21:19:52 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/push_swap.h"

int	check_sort(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_atoi(av[i - 1]) > ft_atoi(av[i]))
			return (0);
		i++;
	}
	return (1);
}

int	stack_a_is_sorted(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	if (temp == NULL)
		return (0);
	while (temp -> next)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}
