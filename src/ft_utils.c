/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:46:18 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/10/15 19:02:46 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	index_swap(int *list, int i1, int i2)
{
	int	temp;

	if (!list)
		return ;
	temp = list[i1];
	list[i1] = list[i2];
	list[i2] = temp;
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	*copy_array(int *array, int len)
{
	int	a;
	int	*result;

	a = -1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (0);
	while (++a < len)
		result[a] = array[a];
	return (result);
}

int	check_nbr(char *str)
{
	int	nbr;

	nbr = 1;
	if (!str)
		return (0);
	if (*str == '-')
		++str;
	while (*str)
	{
		if (!ft_isdigit(*str))
			nbr = 0;
		++str;
	}
	return (nbr);
}
