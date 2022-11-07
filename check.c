/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:28:24 by facolomb          #+#    #+#             */
/*   Updated: 2022/03/17 15:28:24 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_is_duplicate(t_stack *sort, int i)
{
	int	check;

	check = sort->cola[i];
	while (i != 0)
	{
		if (check == sort->cola[--i])
			ft_exit(sort);
	}
}

int	ft_is_a_sort(t_stack *sort)
{
	int	i;

	i = 0;
	while (i < sort->cola_size - 1)
	{
		if (sort->cola[i] > sort->cola[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_exit(t_stack *sort)
{
	ft_putstr_fd("Error\n", 2);
	free(sort->cola);
	free(sort->colb);
	exit(0);
}
