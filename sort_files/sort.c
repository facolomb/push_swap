/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:03:19 by facolomb          #+#    #+#             */
/*   Updated: 2022/03/08 11:03:19 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	ft_manage_three(t_stack *sort)
{
	if (sort->cola[1] < sort->cola[0] && sort->cola[1] < sort->cola[2])
	{
		if (sort->cola[0] < sort->cola[2])
			ft_sa(sort, 0);
		else
			ft_ra(sort, 0);
	}
	else if (sort->cola[1] > sort->cola[0] && sort->cola[1] > sort->cola[2])
	{
		if (sort->cola[0] > sort->cola[2])
			ft_rra(sort, 0);
		else
		{
			ft_sa(sort, 0);
			ft_ra(sort, 0);
		}
	}
	else
	{
		ft_ra(sort, 0);
		ft_sa(sort, 0);
	}
}

void	ft_sort(t_stack *sort)
{
	if (sort->cola_size == 2)
		ft_sa(sort, 0);
	else if (sort->cola_size == 3)
		ft_manage_three(sort);
	else if (sort->cola_size <= 5)
		ft_manage_five(sort, sort->cola_size);
	else
		ft_sort_big(sort);
}
