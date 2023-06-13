/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:36:30 by sfernand          #+#    #+#             */
/*   Updated: 2023/06/09 16:27:19 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	ft_num(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (ft_isdigit(num[i]) == 0)
			return (0);
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
		ft_printf("Error: you can doesn't put int");
		return (0);
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
			ft_printf("Error: the arguments '%s'  was not integer", args[i]);
			return (0);
		}
		if (temp >= 2147483648 || temp <= -2147483649)
		{
			ft_printf("Error: the argument was too longer");
			return (0);
		}
		i++;
	}
	return (1);
}
