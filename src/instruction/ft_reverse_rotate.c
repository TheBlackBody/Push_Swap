/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:40:26 by sfernand          #+#    #+#             */
/*   Updated: 2023/06/14 17:43:31 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rra(t_stack *stack, int rrr)
{
	int	i;
	int	temp;

	i = stack->size_a - 1;
	temp = stack->stack_a[i];
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[i] = temp;
	if (rrr == 0)
		ft_printf("rra\n");
}

void    rrb(t_stack *stack, int rrr)
{
    int i;
    int temp;

    i = stack->size_b - 1;
    temp = stack->stack_b[i];
    while (i > 0)
    {
        stack->stack_b[i] = stack->stack_b[i - 1];
        i--;
    }
    stack->stack_b[i] = temp;
    if (rrr == 0)
        ft_printf("rrb\n");
}

void	rrr(t_stack *stack)
{
	rra(stack, 1);
	rrb(stack, 1);
	ft_printf("rrr");
}
