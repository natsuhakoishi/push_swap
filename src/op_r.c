/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <yyean-wa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:28:22 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/09 15:28:54 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *stack, int flag)
{
	int	a;

	if (stack->a_len <= 1)
		return ;
	a = -1;
	while (++a < stack->a_len - 1)
		index_swap(stack->a, a, a + 1);
	if (flag == 1)
		ft_printf("ra\n");
}

void	rb(t_stack *stack, int flag)
{
	int	a;

	if (stack->b_len <= 1)
		return ;
	a = -1;
	while (++a < stack->b_len - 1)
		index_swap(stack->b, a, a + 1);
	if (flag == 1)
		ft_printf("rb\n");
}

void	rr(t_stack *stack, int flag)
{
	ra(stack, 0);
	rb(stack, 0);
	if (flag == 1)
		ft_printf("rr\n");
}
