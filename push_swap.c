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

int	ft_pointer_size(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
		i++;
	return (i);
}

void	ft_is_duplicate(t_stack *sort, int i)
{
	int	check;

	check = sort->cola[i];
	while(i != 0)
	{
		if (check == sort->cola[--i])
		{
			ft_printf("Doublon ! %d\n", sort->cola[i]);
			free(sort->cola);
			free(sort->colb);
			exit(0);
		}
	}
}

void	ft_init_stack(t_stack *sort, char **str, int c)
{
	int	i;
	int	nb_arg;

	i = 0;
	nb_arg = ft_pointer_size(str);
	sort->cola_size = nb_arg - c;
	sort->colb_size = 0;
	sort->cola = ft_calloc(sizeof(int), sort->cola_size);
	sort->colb = ft_calloc(sizeof(int), sort->cola_size);
	while (i < sort->cola_size)
	{
		sort->cola[i] = ft_atoi(str[i + c]);
		ft_is_duplicate(sort, i);
		i++;
	}
}

int	ft_is_a_sort(t_stack *sort)
{
	int	i;

	i = 0;
	while (i < sort->cola_size - 1)
	{
		if (sort->cola[i] > sort->cola[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	sort;
	char	**str;
	int	i;

	i = 0;
	if (argc >= 2)
	{
		if (argc == 2)
		{
			str = ft_split(argv[1], ' ');
			ft_init_stack(&sort, str, 0);
		}
		else
			ft_init_stack(&sort, argv, 1);
		while (i < sort.cola_size)
		{
			ft_printf("%d\n", sort.cola[i]);
			i++;
		}
		ft_printf("Is already sort : %d\n", ft_is_a_sort(&sort));
	}
	else
		ft_printf("Missing arguments\n");
	return (0);
}
