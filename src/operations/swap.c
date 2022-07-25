/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:18:25 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/21 17:48:03 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*This is for the operations sa,sb,sss*/

void	sa(t_node **top)
{
	int	aux;

	if (!top)
		return ;
	if ((*top) && (*top)->nxt)
	{
		aux = (*top)->value;
		(*top)->value = (*top)->nxt->value;
		(*top)->nxt->value = aux;
	}
}

void	sb(t_node **top)
{
	int	aux;

	if (!top)
		return ;
	if ((*top) && (*top)->nxt)
	{
		aux = (*top)->value;
		(*top)->value = (*top)->nxt->value;
		(*top)->nxt->value = aux;
	}
}

void	ss(t_node **a, t_node **b)
{
	if (!a && !b)
		return ;
	sa(a);
	sb(b);
}
