/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:16:28 by facolomb          #+#    #+#             */
/*   Updated: 2022/02/22 11:16:28 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "include/ft_printf.h"

typedef struct s_stack
{
	int	*cola;
	int	*colb;
	int	cola_size;
	int	colb_size;
	int	count;
}		t_stack;

// Swap fonction
void	ft_sa(t_stack *sort);
void	ft_sb(t_stack *sort);
void	ft_ss(t_stack *sort);
//Push fonction
void	ft_pa(t_stack *sort);
void	ft_pb(t_stack *sort);
//Rotate fonction
void	ft_ra(t_stack *sort);
void	ft_rb(t_stack *sort);
void	ft_rr(t_stack *sort);
//Reverse rotate fonction
void	ft_rra(t_stack *sort);
void	ft_rrb(t_stack *sort);
void	ft_rrr(t_stack *sort);
#endif