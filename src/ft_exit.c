/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <yyean-wa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:55:54 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/16 10:15:54 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	exit_free(t_stack *stack, int flag)
{
	if (flag == 2)
		ft_printf("OK\n");
	if (flag == 0 || flag == 2)
	{
		free(stack->a);
		free(stack->b);
		exit(0);
	}
	free(stack->a);
	free(stack->b);
	write(2, "Error\n", 6);
	exit(0);
}

void	instant_exit(void)
{
	write(2, "Error\n", 6);
	exit(0);
}
