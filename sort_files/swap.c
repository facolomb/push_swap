/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:15:43 by facolomb          #+#    #+#             */
/*   Updated: 2022/02/22 11:15:43 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_stack *sort, int is_rotate)
{
	int	tmp;

	if (sort->cola_size > 1)
	{
		tmp = sort->cola[0];
		sort->cola[0] = sort->cola[1];
		sort->cola[1] = tmp;
		if (is_rotate == 0)
			ft_printf("sa\n");
	}
}

void	ft_sb(t_stack *sort, int is_rotate)
{
	int	tmp;

	if (sort->colb_size > 1)
	{
		tmp = sort->colb[0];
		sort->colb[0] = sort->colb[1];
		sort->colb[1] = tmp;
		if (is_rotate == 0)
			ft_printf("sb\n");
	}
}

void	ft_ss(t_stack *sort)
{
	ft_sa(sort, 0);
	ft_sb(sort, 0);
}
