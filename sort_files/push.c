/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:15:33 by facolomb          #+#    #+#             */
/*   Updated: 2022/02/22 11:15:33 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_stack *sort)
{
	if (sort->colb_size > 0)
	{
		sort->cola[sort->cola_size] = sort->colb[0];
		sort->cola_size++;
		ft_rra(sort);
		ft_rb(sort);
		sort->colb_size--;
	}
}

void	ft_pb(t_stack *sort)
{
	if (sort->cola_size > 0)
	{
		sort->colb[sort->colb_size] = sort->cola[0];
		sort->colb_size++;
		ft_rrb(sort);
		ft_ra(sort);
		sort->cola[sort->cola_size - 1] = '\0';
		sort->cola_size--;
	}
}
