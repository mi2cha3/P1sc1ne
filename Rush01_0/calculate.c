/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:19:51 by skamijo           #+#    #+#             */
/*   Updated: 2024/09/18 15:26:42 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declaration.h"
#include <stdio.h>

int	calculate(int **matrix, int *value, int dim, int id)
{
	int	bld_height;

	if (id >= dim * dim)
		return (1);
	bld_height = 0;
	while (bld_height <= dim)
	{
		bld_height++;
		if (!chk_duplication(matrix, dim, id, bld_height))
		{
			matrix[id / dim][id % dim] = bld_height;
			if (!chk_visible_bld_count(matrix, dim, id, value))
			{
				if (calculate(matrix, value, dim, id + 1))
					return (1);
			}
			else
				matrix[id / dim][id % dim] = 0;
		}
		
	}
	return (0);
}
