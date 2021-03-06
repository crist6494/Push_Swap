/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:38:12 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/26 19:28:11 by cmorales         ###   ########.fr       */
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
	ft_printf("RRA");
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
	ft_printf("RRB\n");
}

void	rrr(t_node **a, t_node **b)
{
	rra(a);
	rrb(b);
	ft_printf("RRR\n");
}
