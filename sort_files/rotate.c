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
	int	*new;
	int	i;

	if (sort->cola_size == 2)
		ft_sa(sort);
	else if (sort->cola_size > 2)
	{
		new = ft_calloc(sizeof(int), sort->cola_size);
		i = sort->cola_size - 1;
		new[i] = sort->cola[0];
		while (i > 0)
		{
			new[i - 1] = sort->cola[i];
			i--;
		}
		while (i < sort->cola_size)
		{
			sort->cola[i] = new[i];
			i++;
		}
		free(new);
	}
}

void	ft_rb(t_stack *sort)
{
	int	*new;
	int	i;

	if (sort->colb_size == 2)
		ft_sb(sort);
	else if (sort->colb_size > 2)
	{
		new = ft_calloc(sizeof(int), sort->colb_size);
		i = sort->colb_size - 1;
		new[i] = sort->colb[0];
		while (i > 0)
		{
			new[i - 1] = sort->colb[i];
			i--;
		}
		while (i < sort->colb_size)
		{
			sort->colb[i] = new[i];
			i++;
		}
		free(new);
	}
}

void	ft_rr(t_stack *sort)
{
	ft_ra(sort);
	ft_rb(sort);
}
