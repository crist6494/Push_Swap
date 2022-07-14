/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:22:37 by cmorales          #+#    #+#             */
/*   Updated: 2022/07/14 18:12:12 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../42-library/libft.h"
# include <stddef.h>

typedef	struct list_a
{
	int	value;
	struct	list_a *prv;
	struct	list_a *next;
}List_a;

int	push_swap(int total_arg, char**num);
int	main(int argc, char **argv);
void	add_bottom(List_a **a, List_a *new);
void	init_stack(List_a **a, int number);

#endif
