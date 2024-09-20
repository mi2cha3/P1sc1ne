/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:51:51 by ktei              #+#    #+#             */
/*   Updated: 2024/09/16 13:23:45 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rec(int n, int init, int depth, char *comb)
{
	int	i;

	if (depth == n)
	{
		write(1, comb, n);
		if (comb[0] != 9 - n + 1 + '0')
			write(1, ", ", 2);
		return ;
	}
	i = init;
	while (i <= 9)
	{
		comb[depth] = i + '0';
		ft_rec(n, i + 1, depth + 1, comb);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];

	ft_rec(n, 0, 0, comb);
}

// int	main(void)
// {
// 	ft_print_combn(9);
// 	return (0);
// }
//