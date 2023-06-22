/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:42:24 by sfernand          #+#    #+#             */
/*   Updated: 2023/06/22 02:09:18 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static	int	ft_tablen(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

static void	init(t_stack *stack, int argc, char **argv)
{
	int		i;
	int		n;
	int		tablen;
	char	**args;

	i = 0;
	n = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i  = 1;
		args = argv;
	}
	tablen = ft_tablen(args);
	stack->stack_a = (int *)malloc(sizeof(int *) * tablen - 1);
	stack->stack_b = (int *)malloc(sizeof(int *) * tablen - 1);
	stack->size_a = tablen - 1;
	stack->size_b = 0;
	while (args[i])
	{
		stack->stack_a[n] = ft_atoi(args[i]);
		i++;
		n++;
	}
	ft_check_double(stack);
	stack->n_args = n;
	stack->args = args;
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	if (ft_check_args(argc, argv) == 0)
		return (0);
	init(&stack, argc, argv);
	if (stack.n_args == 2 && stack.stack_a[0] > stack.stack_a[1])
		sa(&stack, 0);
	else if (stack.n_args == 3)
		sort_3(&stack);
	else if (stack.n_args == 4)
		sort_4(&stack);
	else if (stack.n_args == 5)
		sort_5(&stack);
	else if (stack.n_args > 5)
		radix(&stack);
	free(stack.stack_a);
	free(stack.stack_b);
	exit (0);
}
