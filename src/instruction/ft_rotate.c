/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:40:00 by sfernand          #+#    #+#             */
/*   Updated: 2023/06/12 15:16:50 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ra(t_stack *stack, int rr)
{
	int	i;
	int	n;
	int	temp;

	i = stack->size_a - 1;
	n = 0;
	temp = stack->stack_a[0];
	ft_printf("\n%i\n", i);
	while (n != i)
	{
		stack->stack_a[n] = stack->stack_a[n + 1];
		n++;
	}
	stack->stack_a[n] = temp;
	if (rr == 0)
		ft_printf("ra\n");
}

void    rb(t_stack *stack, int rr)
{
    int i;
    int n;
    int temp;

    i = stack->size_b - 1;
    n = 0;
    temp = stack->stack_b[0];
    ft_printf("\n%i\n", i);
    while (n != i)
    {
        stack->stack_b[n] = stack->stack_b[n + 1];
        n++;
    }
    stack->stack_b[n] = temp;
	if (rr == 0)
		ft_printf("rb\n");
}

void	rr(t_stack *stack)
{
	ra(stack, 1);
	rb(stack, 1);
	ft_printf("rr\n");
}
