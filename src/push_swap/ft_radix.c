/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:52:21 by sfernand          #+#    #+#             */
/*   Updated: 2023/06/22 01:26:27 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	is_array_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a - 1)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	radix(t_stack *stack)
{
	int	size_a;
	int	max_bits;
	int	i;
	int	j;
	int	a;

	max_bits = 0;
	i = -1;
	a = 0;
	size_a = stack->size_a;
	while (stack->size_a >> max_bits)
		max_bits++;
	while (++i <= max_bits)
	{
		j = 0;
		while (j != size_a && !is_array_sorted(stack))
		{
			a = 0;
			if (((stack->stack_a[0] >> i) & 1) == 0)
				pb(stack);
			else
				ra(stack, 0);
			j++;
		}
		while (stack->size_b != 0)
		{
			pa(stack);
		}
	}
}
