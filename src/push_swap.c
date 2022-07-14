/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:22:21 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/14 18:49:37 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	push_swap(int total_arg, char **num)
{
	List_a	*a;
	List_a *b;
	int		i;

	a = NULL;
	b = NULL;
	i = 1;
	while (i < total_arg)
	{
		init_stack(&a, ft_atoi(num[i]));
		i++;
	}
	while (a)
	{
		printf("%d\n", a->value);
		a = a->next;
	}
	return (0);
}