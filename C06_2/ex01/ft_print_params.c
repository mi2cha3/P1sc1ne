/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:41:17 by ktei              #+#    #+#             */
/*   Updated: 2024/09/14 10:46:42 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	k;

	i = 1;
	while (i <= argc - 1)
	{
		k = 0;
		while (argv[i][k])
		{
			ft_putchar(argv[i][k]);
			k ++;
		}
		ft_putchar('\n');
		i ++;
	}
}
