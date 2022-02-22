/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <facolomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:13:08 by facolomb          #+#    #+#             */
/*   Updated: 2022/02/22 11:13:08 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack sort;
	int	i;

	if (argc > 2)
	{
		i = 0;
		sort.cola_size = argc - 1;
		sort.colb_size = 0;
		sort.cola = ft_calloc(sizeof(int), sort.cola_size);
		sort.colb = ft_calloc(sizeof(int), sort.cola_size);
		while (i < sort.cola_size)
		{
			sort.cola[i] = ft_atoi(argv[i + 1]);
			i++;
		}
	}
	else
		ft_printf("Missing arguments\n");
	return (0);
}