/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:29:18 by facolomb          #+#    #+#             */
/*   Updated: 2022/03/08 16:29:18 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	ft_nb_to_top(t_stack *sort, int nb, int pos)
{
	while (sort->cola[0] != nb)
	{
		if (pos <= 2)
			ft_ra(sort, 0);
		else
			ft_rra(sort, 0);
	}
	ft_pb(sort);
}

void	ft_find_lowest(t_stack *sort)
{
	int	lowest;
	int	pos;
	int	i;

	i = 0;
	lowest = 2147483647;
	while (i < sort->cola_size)
	{
		if (sort->cola[i] < lowest)
		{
			lowest = sort->cola[i];
			pos = i;
		}
		i++;
	}
	ft_nb_to_top(sort, lowest, pos);
}

void	ft_find_highest(t_stack *sort)
{
	int	highest;
	int	pos;
	int	i;

	i = 0;
	highest = -2147483647 - 1;
	while (i < sort->cola_size)
	{
		if (sort->cola[i] > highest)
		{
			highest = sort->cola[i];
			pos = i;
		}
		i++;
	}
	ft_nb_to_top(sort, highest, pos);
}

void	ft_manage_five(t_stack *sort, int x)
{
	ft_find_lowest(sort);
	if (x == 5)
		ft_find_highest(sort);
	if (!(ft_is_a_sort(sort)))
		ft_manage_three(sort);
	if (x == 5)
	{
		ft_pa(sort);
		ft_ra(sort, 0);
	}
	ft_pa(sort);
}
