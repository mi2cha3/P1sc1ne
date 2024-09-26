/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:39:38 by ktei              #+#    #+#             */
/*   Updated: 2024/09/26 12:55:58 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char *av[])
{
	if (ac != 4)
		return (0);
	else if (av[2][0] == '+' && ft_strlen(av[2]) == 1)
		do_op(av[1], av[3], ft_plus);
	else if (av[2][0] == '-' && ft_strlen(av[2]) == 1)
		do_op(av[1], av[3], ft_sub);
	else if (av[2][0] == '/' && ft_strlen(av[2]) == 1)
		do_op(av[1], av[3], ft_divide);
	else if (av[2][0] == '*' && ft_strlen(av[2]) == 1)
		do_op(av[1], av[3], ft_times);
	else if (av[2][0] == '%' && ft_strlen(av[2]) == 1)
		do_op(av[1], av[3], ft_mod);
	else
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
