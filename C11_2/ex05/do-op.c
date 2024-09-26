/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:50:45 by ktei              #+#    #+#             */
/*   Updated: 2024/09/25 22:14:34 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	do_op(char *value1, char *value2, void (*f)(int, int))
{
	int	nbr1;
	int	nbr2;

	nbr1 = ft_atoi(value1);
	nbr2 = ft_atoi(value2);
	f(nbr1, nbr2);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	p;

	p = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			p *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * p);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}
