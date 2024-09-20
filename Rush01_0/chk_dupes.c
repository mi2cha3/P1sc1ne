/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_dupes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skamijo <skamijo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:19:55 by skamijo           #+#    #+#             */
/*   Updated: 2024/09/15 14:28:31 by skamijo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declaration.h"

int	chk_duplication(int **matrix, int dim, int id, int bld_height)
{
	int	i;

	i = 0;
	while (i < id / dim)
	{
		if (matrix[i][id % dim] == bld_height)
			return (1);
		i++;
	}
	i = 0;
	while (i < id % dim)
	{
		if (matrix[id / dim][i] == bld_height)
			return (1);
		i++;
	}
	return (0);
}
