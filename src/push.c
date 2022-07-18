/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:54:02 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/18 18:30:37 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


void	push_a(List_a **a, List_a **b)
/* take element from top of stack b and put it on top stack a
** do nothing if stack b is empty */
{
	List_a	*temp;

	if (*b)
	{
		temp = (*b)->nxt;
		(*b)->nxt = *a;
		*a = *b;
		*b = temp;
	}
}

void	push_b(List_a **a, List_a **b)
/* take element from top of stack a and put it on top stack b
** do nothing if stack a is empty */
{
	List_a	*temp;

	if (*a)
	{
		temp = (*a)->nxt;
		(*a)->nxt = *b;
		*b = *a;
		*a = temp;
	}
}



