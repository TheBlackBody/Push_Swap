/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:43:53 by sfernand          #+#    #+#             */
/*   Updated: 2023/06/22 00:59:55 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/printf.h"
# include "../get_next_line/get_next_line.h"

typedef struct	s_stack{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
	int	n_args;
	char	**args;
}				t_stack;


void    sort_3(t_stack  *stack);
void    sort_4(t_stack *stack);
void    sort_5(t_stack *stack);
void    radix(t_stack *stack);
int		ft_check_args(int argc, char **argv);
int		ft_check_double(t_stack *stack);
void    sa(t_stack *stack, int ss);
void    sb(t_stack *stack, int ss);
void    ss(t_stack *stack);
void    ra(t_stack *stack, int rr);
void    rb(t_stack *stack, int rr);
void    rr(t_stack *stack);
void	rra(t_stack *stack, int rrr);
void	rrb(t_stack *stack, int rrr);
void	rrr(t_stack *stack);
void    pb(t_stack *stack);
void    pa(t_stack *stack);

#endif
