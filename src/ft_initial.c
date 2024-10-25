/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initial.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <yyean-wa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:56:09 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/20 01:39:24 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_error_2(char **argv, t_stack *stack)
{
	int	a;

	a = 0;
	while (argv[++a])
	{
		if (!check_nbr(argv[a]))
			instant_exit();
		stack->a_len += 1;
	}
	check_array(argv, stack);
}

void	check_error(int argc, char **argv, t_stack *stack)
{
	int	a;

	a = 0;
	if (argc == 1 || !argv)
		instant_exit();
	if (argc == 2)
	{
		while (argv[1][a])
		{
			if (argv[1][a] != ' ' && argv[1][a] != '-' && \
				!ft_isdigit(argv[1][a]))
				instant_exit();
			a++;
		}
		check_string(argv[1], stack);
	}
	else
		check_error_2(argv, stack);
}
