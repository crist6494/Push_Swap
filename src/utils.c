/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:19:04 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/27 18:39:22 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	run_list_minus_1(t_node **list)
{
	t_node	*tmp;

	tmp = (*list);
	while (tmp)
	{
		if (tmp->fixed == -1)
			return (0);
		tmp = tmp->nxt;
	}
	return (1);
}
void	get_min_value(t_node **list)
{
	int	index;
	t_node	*tmp;
	t_node	*min;
	
	index = 0;
	while (!run_list_minus_1(list))
	{
		tmp = (*list);
		min = NULL;
		while (tmp)
		{
			if (tmp->fixed == -1)
			{	
				if (!min)
					min = tmp;
				else if (tmp->value <= min->value)
					min = tmp;
			}
			tmp = tmp->nxt;	
		}
		min->fixed = index;
		index++;
	}
}