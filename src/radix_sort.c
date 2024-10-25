/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:05:49 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/15 19:16:18 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	bubblesort(int *array, int i)
{
	int	a;
	int	b;

	a = -1;
	while (++a < i - 1)
	{
		b = -1;
		while (++b < i - a - 1)
		{
			if (array[b] > array[b + 1])
				ft_swap(&array[b], &array[b + 1]);
		}
	}
}

void	ft_indexing(t_stack *stack)
{
	int	*temp;
	int	a;
	int	b;

	a = -1;
	b = -1;
	temp = copy_array(stack->a, stack->a_len);
	bubblesort(temp, stack->a_len);
	while (++a < stack->a_len)
	{
		while (++b < stack->a_len)
		{
			if (temp[b] == stack->a[a])
			{
				stack->a[a] = b;
				break ;
			}
		}
		b = -1;
	}
	free(temp);
}

void	check_bit(t_stack *stack, int bit)
{
	int	temp_bit;

	temp_bit = (stack->a[0] >> bit) & 1;
	if (temp_bit == 0)
		pb(stack, 1);
	else
		ra(stack, 1);
}

void	radix_sort(t_stack *stack)
{
	int	a;
	int	bit;
	int	len;

	a = -1;
	bit = 0;
	len = stack->a_len;
	while (!ft_check_sort(stack, 0))
	{
		while (++a < len)
			check_bit(stack, bit);
		a = -1;
		while (stack->b_len > 0)
			pa(stack, 1);
		++bit;
	}
}
