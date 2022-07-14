/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:18:25 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/14 19:25:36 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_s(List_a **top)
{
	int	i;
	int	j;
	List_a	*tmp;

	tmp = NULL;
	if ((*top) && (*top)->next)
	{
		tmp = *top;
		i = (*top)->value;
		j = (*top)->next->value;
		(*top)->value = j;
		(*top)->next->value = i;
	}
}