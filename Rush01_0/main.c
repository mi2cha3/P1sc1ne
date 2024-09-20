/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skamijo <skamijo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:20:10 by skamijo           #+#    #+#             */
/*   Updated: 2024/09/15 17:45:44 by skamijo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declaration.h"

int	main(int argc, char **argv)
{
	int	*value;
	int	**matrix;
	int	n;
	int	dim;

	n = arg_chk(argc, argv);
	if (n == -1)
	{
		ft_putstr("Error : The argument's format are wrong.\n");
		return (0);
	}
	else if (n == -2)
	{
		ft_putstr("Error : The number of arguments are wrong.\n");
		return (0);
	}
	dim = n / 4;
	value = get_value(argv[1], n);
	matrix = allocate_matrix_mem(dim);
	if (calculate(matrix, value, dim, 0))
		output_answer(matrix, dim);
	else
		ft_putstr("Error : No match pattern.\n");
	freeing(value, matrix);
	return (0);
}
