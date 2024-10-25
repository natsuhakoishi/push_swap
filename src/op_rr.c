/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <yyean-wa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:28:52 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/09 15:32:26 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *stack, int flag)
{
	int	a;

	if (stack->a_len <= 1)
		return ;
	a = stack->a_len;
	while (--a > 0)
		index_swap(stack->a, a, a - 1);
	if (flag == 1)
		ft_printf("rra\n");
}

void	rrb(t_stack *stack, int flag)
{
	int	a;

	if (stack->b_len <= 1)
		return ;
	a = stack->b_len;
	while (--a > 0)
		index_swap(stack->b, a, a - 1);
	if (flag == 1)
		ft_printf("rrb\n");
}

void	rrr(t_stack *stack, int flag)
{
	rra(stack, 0);
	rrb(stack, 0);
	if (flag == 1)
		ft_printf("rrr\n");
}
