/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:28:32 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/15 19:39:37 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *stack, int flag)
{
	int	a;

	if (stack->b_len == 0)
		return ;
	a = stack->a_len + 1;
	while (--a > 0)
		index_swap(stack->a, a, a - 1);
	stack->a[0] = stack->b[0];
	a = -1;
	while (++a < stack->b_len - 1)
		index_swap(stack->b, a, a + 1);
	stack->b_len -= 1;
	stack->a_len += 1;
	if (flag == 1)
		ft_printf("pa\n");
}

void	pb(t_stack *stack, int flag)
{
	int	a;

	if (stack->a_len == 0)
		return ;
	a = stack->b_len + 1;
	while (--a > 0)
		index_swap(stack->b, a, a - 1);
	stack->b[0] = stack->a[0];
	a = -1;
	while (++a < stack->a_len - 1)
		index_swap(stack->a, a, a + 1);
	stack->a_len -= 1;
	stack->b_len += 1;
	if (flag == 1)
		ft_printf("pb\n");
}
