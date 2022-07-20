/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:38:12 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/20 20:18:04 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_node **a)
{
	t_node	*tmp;
	t_node	*val;
	
	tmp = (*a);
	while (tmp->nxt->nxt != NULL)
		tmp = tmp->nxt;
	val = tmp->nxt;
	val->nxt = (*a);
	(*a) = val;
	tmp->nxt = NULL;
}

void	rrb(t_node **b)
{
	t_node	*tmp;
	t_node	*val;
	
	tmp = (*b);
	while (tmp->nxt->nxt != NULL)
		tmp = tmp->nxt;
	val = tmp->nxt;
	val->nxt = (*b);
	(*b) = val;
	tmp->nxt = NULL;
}

void	rrr(t_node **a, t_node **b)
{
	rra(a);
	rrb(b);
}