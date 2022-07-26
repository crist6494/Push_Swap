/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:19:04 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/26 20:34:04 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	run_list_minus_1(t_node **list)
{
	while ((*list)->fixed)
	{
		if ((*list)->fixed == -1)
			return (0);
		list = (*list)->nxt;
	}
}
int	get_min_value(t_node *tmp)
{
	int	min;
	
	min = tmp->value;
	while (tmp)
	{
		if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->nxt;
	}
	return (min);
}