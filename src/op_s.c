/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:28:50 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/15 19:41:55 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *stack, int flag)
{
	if (stack->a_len <= 1)
		return ;
	index_swap(stack->a, 0, 1);
	if (flag == 1)
		ft_printf("sa\n");
}

void	sb(t_stack *stack, int flag)
{
	if (stack->b_len <= 1)
		return ;
	index_swap(stack->b, 0, 1);
	if (flag == 1)
		ft_printf("sb\n");
}

void	ss(t_stack *stack, int flag)
{
	sa(stack, 0);
	sb(stack, 0);
	if (flag == 1)
		ft_printf("ss\n");
}
