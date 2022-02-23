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
	int	newa[sort->cola_size + 1];
	int	newb[sort->colb_size - 1];
	int	i;

	if (sort->colb_size > 0)
	{
		i = 1;
		newa[0] = sort->colb[0];
		while (i < sort->cola_size + 1)
		{
			newa[i] = sort->cola[i - 1];
			newb[i - 1] = sort->colb[i];
			i++;
		}
		sort->cola = newa;
		sort->colb = newb;
		sort->cola_size++;
		sort->colb_size--;
	}
}

void	ft_pb(t_stack *sort)
{
	int	newa[sort->cola_size - 1];
	int	newb[sort->colb_size + 1];
	int	i;

	if (sort->cola_size > 0)
	{
		i = 1;
		newb[0] = sort->cola[0];
		while (i < sort->colb_size + 1)
		{
			newb[i] = sort->colb[i - 1];
			newa[i - 1] = sort->cola[i];
			i++;
		}
		sort->colb = newb;
		sort->cola = newa;
		sort->colb_size++;
		sort->cola_size--;
	}
}