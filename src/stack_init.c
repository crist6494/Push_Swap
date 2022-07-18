/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:49:24 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/18 17:11:53 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	add_bottom(List_a **a, List_a *new)//new es el tmp
{
	List_a	*tmp;
	
	if (*a == NULL)
		*a = new;
	else
	{
		tmp = *a;
		while (tmp->nxt)
			tmp = tmp->nxt;
		tmp->nxt = new;//Añadimos el numero al final
		new->prv = tmp; //Asi sabes que va a ser el previo
	}
}

void	init_stack(List_a **a, int number)
{
	List_a	*tmp;
	
	tmp = malloc(sizeof(List_a));
	if (!tmp)
		return ;
	tmp->value = number;//Crear valor sin anterior ni posterior para poner al final
	tmp->nxt = NULL;
	tmp->prv = NULL;
	add_bottom(a, tmp);
	tmp = NULL; //vaciamos la lista
}

