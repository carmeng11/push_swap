/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicates.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:43:29 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/10 19:33:17 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicates(int argc, char **argv)
{
	int	i;
	int	size;
	int	num;
	int	j;
	int	*numbers;

	i = 0;
	size = 0;
	numbers = malloc((argc - 1) * sizeof(int));
	if (!numbers)
		ft_error();
	while (++i < argc)
	{
		num = ft_atoi_push(argv[i]);
		j = 0;
		while (j++ < size)
		{
			if (num == numbers[j])
				ft_error();
		}
		numbers[size] = num;
		size++;
	}
	free(numbers);
	return (1);
}
