/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:20:37 by ktei              #+#    #+#             */
/*   Updated: 2024/09/16 14:48:26 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *col, int init)
{
	int	i;

	i = 0;
	while (i < init)
	{
		if (col[i] == col[init] || (col[i] - col[init]) == i - init
			|| (col[i] - col[init]) == init - i)
			return (1);
		i ++;
	}
	return (0);
}

void	ft_rec(char *col, int init, int *ct)
{
	int	i;

	i = 0;
	if (init == 10)
	{
		write(1, col, 10);
		write(1, "\n", 1);
		(*ct)++;
		return ;
	}
	while (i < 10)
	{
		col[init] = i + '0';
		if (check(col, init) == 0)
		{
			ft_rec(col, init + 1, ct);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	col[10];
	int		ct;

	ct = 0;
	ft_rec(col, 0, &ct);
	return (ct);
}

// int	main(void)
// {
// 	ft_ten_queens_puzzle();
// 	return (0);
// }
//