/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:04:59 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/26 19:28:06 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_node **a)
{
	t_node	*tmp;
	int		val;

	val = (*a)->value;
	tmp = (*a);
	while (tmp->nxt)
		tmp = tmp->nxt;
	tmp->nxt = malloc(sizeof(t_node));
	tmp->nxt->value = val;
	(*a) = (*a)->nxt;
	(*a)->prv = NULL;
	ft_printf("RA\n");
}

void	rb(t_node **b)
{
	t_node	*tmp;
	int		val;

	val = (*b)->value;
	tmp = (*b);
	while (tmp->nxt)
		tmp = tmp->nxt;
	tmp->nxt = malloc(sizeof(t_node));
	tmp->nxt->value = val;
	(*b) = (*b)->nxt;
	(*b)->prv = NULL;
	ft_printf("RB\n");
}

void	rr(t_node **a, t_node **b)
{
	ra(a);
	rb(b);
	ft_printf("RR\n");
}
