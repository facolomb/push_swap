/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:15:37 by facolomb          #+#    #+#             */
/*   Updated: 2022/02/22 11:15:37 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_stack *sort, int is_push)
{
	int	tmp;
	int	i;

	if (sort->cola_size == 2)
		ft_sa(sort, 1);
	else if (sort->cola_size > 2)
	{
		i = sort->cola_size - 1;
		tmp = sort->cola[i];
		while (i > 0)
		{
			sort->cola[i] = sort->cola[i - 1];
			i--;
		}
		sort->cola[i] = tmp;
		if (is_push == 0)
			ft_printf("rra\n");
	}
}

void	ft_rrb(t_stack *sort, int is_push)
{
	int	i;
	int	tmp;

	if (sort->colb_size == 2)
		ft_sb(sort, 1);
	else if (sort->colb_size > 2)
	{
		i = sort->colb_size - 1;
		tmp = sort->colb[i];
		while (i > 0)
		{
			sort->colb[i] = sort->colb[i - 1];
			i--;
		}
		sort->colb[i] = tmp;
		if (is_push == 0)
			ft_printf("rrb\n");
	}
}

void	ft_rrr(t_stack *sort)
{
	ft_rra(sort, 0);
	ft_rrb(sort, 0);
}
