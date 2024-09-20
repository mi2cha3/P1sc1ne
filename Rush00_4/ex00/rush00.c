/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:59:24 by ktei              #+#    #+#             */
/*   Updated: 2024/09/08 12:26:01 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	help_put_ans(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == 1 && j == x))
	{
		ft_putchar('o');
	}
	else if ((i == y && j == 1) || (i == y && j == x))
	{
		ft_putchar('o');
	}
	else if (i == 1 || i == y)
	{
		ft_putchar('-');
	}
	else if (j == 1 || j == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			help_put_ans(i, j, x, y);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}
