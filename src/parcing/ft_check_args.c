/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:36:30 by sfernand          #+#    #+#             */
/*   Updated: 2023/06/22 04:06:54 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	ft_num(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
	{
		ft_printf("Error\n");
		exit (0);
	}
	while (num[i])
	{
		if (ft_isdigit(num[i]) == 0)
			exit (0);
		i++;
	}
	return (1);
}

int	ft_check_double(t_stack *stack)
{
	int	j;
	int	i;
	int	temp;
	int count;

	j = 0;
	i = 0;
	count = 0;
	while (i != stack->size_a)
	{
		temp = stack->stack_a[i];
		while (j < stack->size_a)
		{
			if (stack->stack_a[j] == temp)
				count++;
			j++;
		}
		if (count > 1)
		{
			ft_printf("Error\n");
			free(stack->stack_a);
			free(stack->stack_b);
			exit (0);
		}
		count = 0;
		j = 0;
		i++;
	}
	return (1);
}

int	ft_check_args(int argc, char **argv)
{
	int		i;
	long	temp;
	char	**args;	

	i = 0;
	temp = 0;
	if (argc == 1)
	{
		exit (0);
	}
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		temp = ft_atoi(args[i]);
		if (!ft_num(args[i]))
		{
			ft_printf("Error\n", args[i]);
			exit (0);
		}
		if ((int)temp > 2147483647 || (int)temp < -2147483648)
		{
			ft_printf("Error\n");
			exit (0);
		}
		i++;
	}
	if (i == 1)
	{
		ft_printf("Error\n");
		exit (0);
	}
	return (1);
}
