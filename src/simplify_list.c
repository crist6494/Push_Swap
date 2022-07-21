/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplify_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:04:38 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/21 19:16:31 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(t_node **list_a)
{
	int	a;
	int	b;

	a = (*list_a)->value;
	b = (*list_a)->nxt->value;

	if (a > b)
		sa(list_a);
	else
		return ;
		
}

void	sort_3(t_node **list_a)
{
	int	a;
	int	b;
	int	c;

	a = (*list_a)->value;
	b = (*list_a)->nxt->value;
	c = (*list_a)->nxt->nxt->value;
	if (a > b && b > c)
	{
		sa(list_a);
		rra(list_a);
	}
	else if (a > b && c < a)
		ra(list_a);
	else if (a > b && b < c)
		sa(list_a);
	else if (a < b && c < a)
		rra(list_a);
	else if (a < b && c > a && b > c)
	{
		rra(list_a);
		sa(list_a);
	}
	else
		return ;
}