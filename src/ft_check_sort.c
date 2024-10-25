/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:21:37 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/15 19:16:03 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_sort(t_stack *stack, int flag)
{
	int	a;
	int	temp;

	a = -1;
	temp = INT_MIN;
	while (++a < stack->a_len)
	{
		if (temp > stack->a[a])
			return (0);
		temp = stack->a[a];
	}
	if (stack->b_len != 0)
		return (0);
	exit_free(stack, flag);
	return (0);
}
