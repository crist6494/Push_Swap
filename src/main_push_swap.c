/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:33:42 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/18 19:34:43 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	push_swap(int total_arg, char **num)
{
	List_a	*a;
	List_a	*b;
	int		i;

	a = NULL;
	b = NULL;
	i = 1;
	while (i < total_arg)
	{
		init_stack(&a, ft_atoi(num[i]));
		i++;
	}
	swap(&a);
	while (a)
	{
		printf("%d\n", a->value);
		a = a->nxt;
	}
	while (b)
	{
		printf("Este es la lista b: %d\n", b->value);
		b = b->nxt;
	}
	
	return (0);
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);	
	return (0);
}
