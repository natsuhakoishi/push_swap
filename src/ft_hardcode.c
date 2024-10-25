/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hardcode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:16:58 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/15 23:54:04 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_stack *stack, int flag)
{
	int	*a;

	a = stack->a;
	if (a[0] == 0 && a[1] == 2 && a[2] == 1)
	{
		rra(stack, 1);
		sa(stack, 1);
	}
	else if (a[0] == 1 && a[1] == 2 && a[2] == 0)
		rra(stack, 1);
	else if (a[0] == 1 && a[1] == 0 && a[2] == 2)
		sa(stack, 1);
	else if (a[0] == 2 && a[1] == 1 && a[2] == 0)
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if (a[0] == 2 && a[1] == 0 && a[2] == 1)
		ra(stack, 1);
	if (flag == 0)
		exit_free(stack, 0);
}

void	sort_4(t_stack *stack)
{
	while (stack->a[0] != 0)
		ra(stack, 1);
	pb(stack, 1);
	ft_indexing(stack);
	sort_3(stack, 1);
	pa(stack, 1);
	exit_free(stack, 0);
}

void	sort_5(t_stack *stack)
{
	int	a;

	a = 0;
	if (stack->a_len == 4)
		sort_4(stack);
	else if (stack->a_len == 5)
	{
		while (a != 2)
		{
			if (stack->a[0] == 0 || stack->a[0] == 1)
			{
				pb(stack, 1);
				++a;
			}
			else
				ra(stack, 1);
		}
		if (stack->b[0] < stack->b[1])
			sb(stack, 1);
		ft_indexing(stack);
		sort_3(stack, 1);
		pa(stack, 1);
		pa(stack, 1);
		exit_free(stack, 0);
	}
}
