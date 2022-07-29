/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <cristian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:04:38 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/29 19:25:46 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	order_2(t_node **list_a)
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

void	order_3(t_node **list_a)
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
}

void	order_sort_4(t_node **list_a, t_node **list_b)
{
	t_node	*tmp;
	
	tmp = (*list_a);
	get_min_value(&tmp);
	pb(list_a,list_b);
	order_3(list_a);
	pa(list_a,list_b);
		
	if(tmp->fixed == 1)
		sa(list_a);
	else if (tmp->fixed == 3)
		ra(list_a);
	else if (tmp->fixed == 2)
	{
		rra(list_a);
		pb(list_a,list_b);
		ra(list_a);
		pa(list_a, list_b);
		ra(list_a);
	}
}

void	order_sort_5(t_node **list_a, t_node **list_b)
{
	t_node	*tmp;
	
	tmp = (*list_a);
	get_min_value(&tmp);
	pb(list_a,list_b);
	order_sort_4(list_a, list_b);
	pa(list_a,list_b);
		
	if(tmp->fixed == 1)
		sa(list_a);
	else if (tmp->fixed == 4)
		ra(list_a);
	else if (tmp->fixed == 3)
	{
		rra(list_a);
		pb(list_a,list_b);
		ra(list_a);
		pa(list_a, list_b);
		ra(list_a);
	}
	else if (tmp->fixed == 2)
	{
		rra(list_a);
		rra(list_a);
		pb(list_a,list_b);
		pb(list_a,list_b);
		ra(list_a);
		pa(list_a, list_b);
		pa(list_a, list_b);
		ra(list_a);
		ra(list_a);
	}
}
