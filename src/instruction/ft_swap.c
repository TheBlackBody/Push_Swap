/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:39:09 by sfernand          #+#    #+#             */
/*   Updated: 2023/06/08 10:20:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sb(t_stack *stack, int ss)
{
    int temp_b;

    temp_b = stack->stack_b[0];
    stack->stack_b[0] = stack->stack_b[1];
    stack->stack_b[1] = temp_b;
	if (ss == 0)
    	ft_printf("sb\n");
}

void	sa(t_stack *stack, int ss)
{
	int	temp_a;

	temp_a = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = temp_a;
	if (ss == 0)
		ft_printf("sa\n");
}

void	ss(t_stack *stack)
{
	sa(stack, 1);
	sb(stack, 1);
	ft_printf("ss\n");
}
