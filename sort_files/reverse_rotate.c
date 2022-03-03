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

void	ft_rra(t_stack *sort)
{
	int	*new;
	int	i;

	if (sort->cola_size == 2)
		ft_sa(sort);
	else if (sort->cola_size > 2)
	{
		new = ft_calloc(sizeof(int), sort->cola_size);
		i = 0;
		new[0] = sort->cola[sort->cola_size - 1];
		while (i < sort->cola_size)
		{
			new[i + 1] = sort->cola[i];
			i++;
		}
		while (i >= 0)
		{
			sort->cola[i] = new[i];
			i--;
		}
		free(new);
	}
}

void	ft_rrb(t_stack *sort)
{
	int	*new;
	int	i;

	if (sort->colb_size == 2)
		ft_sb(sort);
	else if (sort->colb_size > 2)
	{
		new = ft_calloc(sizeof(int), sort->colb_size);
		i = 0;
		new[0] = sort->colb[sort->colb_size - 1];
		while (i < sort->colb_size)
		{
			new[i + 1] = sort->colb[i];
			i++;
		}
		while (i >= 0)
		{
			sort->colb[i] = new[i];
			i--;
		}
		free(new);
	}
}

void	ft_rrr(t_stack *sort)
{
	ft_rra(sort);
	ft_rrb(sort);
}
