/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:49:24 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/19 17:27:44 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	add_bottom(t_node **list_a, t_node *new)//new es el tmp
{
	t_node	*tmp;
	
	if (*list_a == NULL)
		*list_a = new;
	else
	{
		tmp = *list_a;
		while (tmp->nxt)
			tmp = tmp->nxt;
		tmp->nxt = new;//Añadimos el numero al final
		new->prv = tmp; //Asi sabes que va a ser el previo
	}
}

void	init_stack(t_node **list_a, int number)
{
	t_node	*tmp;
	
	tmp = malloc(sizeof(t_node));
	if (!tmp)
		return ;
	tmp->value = number;//Crear valor sin anterior ni posterior para poner al final
	tmp->nxt = NULL;
	tmp->prv = NULL;
	add_bottom(list_a, tmp);
	tmp = NULL; //vaciamos la lista
}

