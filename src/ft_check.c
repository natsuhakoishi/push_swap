/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <yyean-wa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:21:23 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/20 01:34:07 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_valid(char *array)
{
	if (ft_strlen(array) == 1 && (*array < '0' || *array > '9'))
		return (0);
	if (*array == '+' || *array == '-')
		++array;
	while (*array)
	{
		if (*array < '0' || *array > '9')
			return (0);
		++array;
	}
	return (1);
}

static void	free_array(char **array, int flag, t_stack *stack)
{
	char	**temp;

	temp = array;
	while (array && *array)
	{
		free(*array);
		array++;
	}
	free(temp);
	if (flag == 1)
		exit_free(stack, 1);
}

void	check_limit(char **array, t_stack *stack, int flag)
{
	char	**temp;
	long	value;
	int		erf;

	erf = 0;
	temp = array;
	if (flag == 0)
		++array;
	while (*array)
	{
		erf = check_valid(*array);
		value = ft_atoi(*array);
		if (value > 2147483647 || value < -2147483648 || erf == 0)
		{
			if (flag == 1)
				free_array(temp, 1, stack);
			exit_free(stack, 1);
		}
		++array;
	}
	array = temp;
}

void	check_array(char **argv, t_stack *stack)
{
	int	a;
	int	b;

	a = -1;
	stack->a = malloc(sizeof(int) * stack->a_len);
	stack->b = malloc(sizeof(int) * stack->a_len);
	check_limit(argv, stack, 0);
	while (++a < stack->a_len)
	{
		if (argv[a + 1][0] == '\0')
			exit_free(stack, 1);
		stack->a[a] = ft_atoi(argv[a + 1]);
		b = a;
		while (--b >= 0)
		{
			if (stack->a[a] == stack->a[b])
				exit_free(stack, 1);
		}
	}
}

void	check_string(char *argv, t_stack *stack)
{
	char	**nbr;
	int		a;
	int		b;

	a = -1;
	nbr = ft_split(argv, ' ');
	while (nbr[++a])
		stack->a_len += 1;
	stack->a = malloc(sizeof(int) * stack->a_len);
	stack->b = malloc(sizeof(int) * stack->a_len);
	check_limit(nbr, stack, 1);
	a = -1;
	while (++a < stack->a_len)
	{
		if (nbr[a][0] == '\0')
			free_array(nbr, 1, stack);
		stack->a[a] = ft_atoi(nbr[a]);
		b = a;
		while (--b >= 0)
		{
			if (stack->a[a] == stack->a[b])
				free_array(nbr, 1, stack);
		}
	}
	free_array(nbr, 0, stack);
}
