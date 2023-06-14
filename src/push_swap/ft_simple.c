/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:52:48 by sfernand          #+#    #+#             */
/*   Updated: 2023/06/14 17:53:52 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_3(t_stack	*stack)
{
	int	i;

	i = 0;
	while (i != stack->size_a)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1] &&
                stack->stack_a[stack->size_a - 1] < stack->stack_a[i + 1])
            ra(stack, 0);
		if (stack->stack_a[stack->size_a - 1] < stack->stack_a[i])
			rra(stack, 0);
		if (stack->stack_a[0] > stack->stack_a[1] && i != stack->size_a - 1)
			sa(stack, 0);
		i++;
	}
}

void	sort_4(t_stack *stack)
{
	int	i;
	int n;

	i = 0;
	n = 0;
	while (stack->stack_a[0] < stack->stack_a[1] || 
			stack->stack_a[0] < stack->stack_a[2] ||
			stack->stack_a[0] < stack->stack_a[3])
	{
		ra(stack, 0);
	}
	
}
