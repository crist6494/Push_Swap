/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:49:24 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/26 20:24:10 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	add_bottom(t_node **list_a, t_node *new)
{
	t_node	*tmp;

	if (*list_a == NULL)
		*list_a = new;
	else
	{
		tmp = *list_a;
		while (tmp->nxt)
			tmp = tmp->nxt;
		tmp->nxt = new;
		new->prv = tmp;
	}
}

void	init_stack(t_node **list_a, int number)
{
	t_node	*tmp;

	tmp = malloc(sizeof(t_node));
	if (!tmp)
		return ;
	tmp->fixed = -1;
	tmp->value = number;
	tmp->nxt = NULL;
	tmp->prv = NULL;
	add_bottom(list_a, tmp);
	tmp = NULL;
}

