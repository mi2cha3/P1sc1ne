/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:36:57 by ktei              #+#    #+#             */
/*   Updated: 2024/09/10 14:44:55 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;
	int	i;
	int	j;

	num1 = 0;
	num2 = 0;
	i = 0;
	j = 0;
	if (argc != 3)
	{
		write (1, "incorrect arguement number\n", 27);
		return (1);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			write (1, "error:a positive integer only\n", 30);
			return (1);
		}
		if (num1 > (2147483647 - (argv[1][i] - '0')) / 10)
		{
			write (1, "detected overflowing\n", 22);
			return (1);
		}
		num1 = num1 * 10 + (argv[1][i] - '0');
		i ++;
	}
	while (argv[2][j] != '\0')
	{
		if (argv[2][j] < '0' || argv[2][j] > '9')
		{
			write (1, "error:a positive integer only\n", 30);
			return (1);
		}
		if (num2 > (2147483647 - (argv[2][j] - '0')) / 10)
		{
			write (1, "detected overflowing\n", 22);
			return (1);
		}
		num2 = num2 * 10 + (argv[2][j] - '0');
		j ++;
	}
	rush(num1, num2);
	return (0);
}

 