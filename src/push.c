/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:54:02 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/19 17:23:06 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


void	pa(t_node **a, t_node **b)
/* take element from top of stack b and put it on top stack a
 do nothing if stack b is empty */
{
	t_node	*temp;

	if (*b)
	{
		temp = (*b)->nxt;
		(*b)->nxt = *a;
		*a = *b;
		*b = temp;
	}
}

void	pb(t_node **a, t_node **b)
/* take element from top of stack a and put it on top stack b
do nothing if stack a is empty */
{
	t_node	*temp;

	if (*a)
	{
		temp = (*a)->nxt;
		(*a)->nxt = *b;
		*b = *a;
		*a = temp;
	}
}



