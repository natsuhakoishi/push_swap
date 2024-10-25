/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <yyean-wa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:57:57 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/20 01:34:50 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;

	if (argc == 1)
		return (0);
	if (argv[1][0] == '\0' && argc == 2)
		return (write(2, "Error\n", 6));
	stack.a_len = 0;
	stack.b_len = 0;
	check_error(argc, argv, &stack);
	ft_indexing(&stack);
	ft_check_sort(&stack, 0);
	if (stack.a_len == 2)
	{
		sa(&stack, 1);
		exit_free(&stack, 0);
	}
	else if (stack.a_len == 3)
		sort_3(&stack, 0);
	else if (stack.a_len <= 5)
		sort_5(&stack);
	else
		radix_sort(&stack);
	return (0);
}
