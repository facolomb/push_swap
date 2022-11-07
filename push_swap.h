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
	int	*radix;
	int	cola_size;
	int	colb_size;
	int	max_size;
}		t_stack;

//Swap fonction
void	ft_sa(t_stack *sort, int is_rotate);
void	ft_sb(t_stack *sort, int is_rotate);
void	ft_ss(t_stack *sort);
//Push fonction
void	ft_pa(t_stack *sort);
void	ft_pb(t_stack *sort);
//Rotate fonction
void	ft_ra(t_stack *sort, int is_push);
void	ft_rb(t_stack *sort, int is_push);
void	ft_rr(t_stack *sort);
//Reverse rotate fonction
void	ft_rra(t_stack *sort, int is_push);
void	ft_rrb(t_stack *sort, int is_push);
void	ft_rrr(t_stack *sort);
//Sort fonction
void	ft_sort(t_stack *sort);
void	ft_manage_three(t_stack *sort);
void	ft_manage_five(t_stack *sort, int x);
void	ft_sort_big(t_stack *sort);
//Check fonction
int		ft_is_a_sort(t_stack *sort);
void	ft_is_duplicate(t_stack *sort, int i);
void	ft_exit(t_stack *sort);
#endif