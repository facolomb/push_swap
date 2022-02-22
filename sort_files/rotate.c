/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:15:40 by facolomb          #+#    #+#             */
/*   Updated: 2022/02/22 11:15:40 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack *sort)
{
	int	new[sort->cola_size];
	int	i;

	i = sort->cola_size - 1;
	new[i] = sort->cola[0];
	while (i > 0)
	{
		new[i - 1] = sort->cola[i];
		i--;
	}
	sort->cola = new;
}

void	ft_rb(t_stack *sort)
{
	int	new[sort->colb_size];
	int	i;

	i = sort->colb_size - 1;
	new[i] = sort->colb[0];
	while (i > 0)
	{
		new[i - 1] = sort->colb[i];
		i--;
	}
	sort->colb = new;
}

void	ft_rr(t_stack *sort)
{
	ft_ra(sort);
	ft_rb(sort);
}