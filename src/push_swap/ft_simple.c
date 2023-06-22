/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:52:48 by sfernand          #+#    #+#             */
/*   Updated: 2023/06/22 02:18:06 by sfernand         ###   ########.fr       */
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

void	put_sort_4(t_stack *stack)
{
	if (stack->stack_a[3] < stack->stack_a[2] &&
			stack->stack_a[3] < stack->stack_a[1] &&
			stack->stack_a[3] < stack->stack_a[0])
		rra(stack, 0);
	else
		ra(stack, 0);
}

void	sort_4(t_stack *stack)
{
	int n;

	n = 1;
	while (stack->stack_a[0] > stack->stack_a[1] || 
			stack->stack_a[0] > stack->stack_a[2] ||
			stack->stack_a[0] > stack->stack_a[3])
	{
		put_sort_4(stack);
		n++;
	}
	if (stack->stack_a[0] < stack->stack_a[1] &&
            stack->stack_a[1] < stack->stack_a[2] &&
            stack->stack_a[2] < stack->stack_a[3])
		n = 0;
	if (n >= 1)
	{
		pb(stack);
		sort_3(stack);
		if (stack->stack_b[0] < stack->stack_a[0])
			pa(stack);
	}
}

void	put_sort_5(t_stack *stack)
{
	if (stack->stack_a[4] < stack->stack_a[3] &&
			stack->stack_a[4] < stack->stack_a[2] &&
			stack->stack_a[4] < stack->stack_a[1] && 
			stack->stack_a[4] < stack->stack_a[0])
		rra(stack, 0);
	else 
		ra(stack, 0);
}

void	sort_5(t_stack *stack)
{
	int n;

    n = 1;
    while (stack->stack_a[0] > stack->stack_a[1] ||
            stack->stack_a[0] > stack->stack_a[2] ||
            stack->stack_a[0] > stack->stack_a[3] ||
			stack->stack_a[0] > stack->stack_a[4])
    {
        put_sort_5(stack);
        n++;
    }
    if (stack->stack_a[0] < stack->stack_a[1] &&
            stack->stack_a[1] < stack->stack_a[2] &&
            stack->stack_a[2] < stack->stack_a[3] &&
			stack->stack_a[3] < stack->stack_a[4])
        n = 0;
    if (n >= 1)
    {
        pb(stack);
        sort_4(stack);
        if (stack->stack_b[0] < stack->stack_a[0])
            pa(stack);
    }
}
