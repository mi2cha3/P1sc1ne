/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_memory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:20:13 by skamijo           #+#    #+#             */
/*   Updated: 2024/09/18 15:20:31 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declaration.h"

int	**allocate_matrix_mem(int dim)
{
	int	**matrix;
	int	i;

	matrix = (int **)malloc(sizeof(int *) * dim);
	if (!matrix)
		ft_putstr("Error\n");
	i = 0;
	while (i < dim)
	{
		matrix[i] = (int *)malloc(sizeof(int) * dim);
		if (!matrix[i])
			ft_putstr("Error\n");
		i++;
	}
	return (matrix);
}

void	freeing(int *value, int **matrix)
{
	free(value);
	free(matrix);
}
