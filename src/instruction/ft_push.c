/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:39:35 by sfernand          #+#    #+#             */
/*   Updated: 2023/06/15 16:45:38 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	add_b(t_stack *stack, int temp)
{
	int	size_b;
	int	i;

	i = 0;
	size_b = stack->size_b;
	while (i != size_b)
	{
		stack->stack_b[i + 1] = stack->stack_b[i];
		i++;
	}
	stack->stack_b[0] = temp;
}

void	pb(t_stack *stack)
{
	int i;
	int	temp;

	i = 0;
	temp = stack->stack_a[0];
	while (i != stack->size_a)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->size_a--;
	if (stack->size_b == 0)
	{
		stack->stack_b[0] = temp;
		stack->size_b++;
	}
	else
	{
		add_b(stack, temp);
		stack->size_b++;
	}
	ft_printf("pb\n");
}

void    add_a(t_stack *stack, int temp)
{
    int size_a;

    size_a = stack->size_a;
    while (size_a >= 0)
    {
        stack->stack_a[size_a] = stack->stack_a[size_a - 1];
        size_a--;;
    }
    stack->stack_a[0] = temp;
}

void    pa(t_stack *stack)
{
    int i;
    int temp;

    i = 0;
    temp = stack->stack_b[0];
    while (i != stack->size_b)
    {
        stack->stack_b[i] = stack->stack_b[i + 1];
        i++;
    }
    stack->size_b--;
    if (stack->size_a == 0)
    {
        stack->stack_a[0] = temp;
        stack->size_a++;
    }
    else
    {
        add_a(stack, temp);
        stack->size_a++;
    }
    ft_printf("pa\n");
}
