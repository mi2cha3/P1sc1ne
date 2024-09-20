/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:03:31 by ktei              #+#    #+#             */
/*   Updated: 2024/09/07 15:52:22 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putout(int l, int m, int n)
{
	write(1, &l, 1);
	write(1, &m, 1);
	write(1, &n, 1);
	if (l != '7' || m != '8' || n != '9')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	l;
	char	m;
	char	n;

	l = '0';
	while (l <= '7')
	{
		m = l + 1;
		while (m <= '8')
		{
			n = m + 1;
			while (n <= '9')
			{
				putout(l, m, n);
				n ++;
			}
			m ++;
		}
		l ++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
//