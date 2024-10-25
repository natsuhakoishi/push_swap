/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <yyean-wa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:56:24 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/16 10:53:54 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"
# include "libft/ft_printf/ft_printf.h"

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		a_len;
	int		b_len;
}				t_stack;

void	sa(t_stack *stack, int flag);
void	sb(t_stack *stack, int flag);
void	ss(t_stack *stack, int flag);
void	pa(t_stack *stack, int flag);
void	pb(t_stack *stack, int flag);
void	ra(t_stack *stack, int flag);
void	rb(t_stack *stack, int flag);
void	rr(t_stack *stack, int flag);
void	rra(t_stack *stack, int flag);
void	rrb(t_stack *stack, int flag);
void	rrr(t_stack *stack, int flag);

void	check_error(int argc, char **argv, t_stack *stack);
void	check_string(char *argv, t_stack *stack);
void	check_array(char **argv, t_stack *stack);
int		ft_check_sort(t_stack *stack, int flag);

void	bubblesort(int *array, int i);
void	ft_indexing(t_stack *stack);

void	radix_sort(t_stack *stack);
void	sort_3(t_stack *stack, int flag);
void	sort_5(t_stack *stack);

void	exit_free(t_stack *stack, int flag);
void	instant_exit(void);

void	ft_swap(int *a, int *b);
void	index_swap(int *list, int i1, int i2);
int		*copy_array(int *array, int len);
int		check_nbr(char *str);

#endif
