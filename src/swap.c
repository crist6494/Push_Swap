/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:18:25 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/18 17:41:39 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*This is for the operations sa,sb,ss*/

void	swap(List_a **top)
{
	int	aux;

	if ((*top) && (*top)->nxt)
	{
		aux = (*top)->value;
		(*top)->value = (*top)->nxt->value;
		(*top)->nxt->value = aux;
	}
}

void	swap_both(List_a **a, List_a **b)
{
	swap(a);
	swap(b);
}