/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:04:59 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/20 17:29:01 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_node **list_a)
{
	t_node	*aux;
	int	a;

	a = (*list_a)->value;
	aux = list_a;
	while(aux)
	{
		a = aux->nxxt;
	}
	
}