/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:59:37 by ktei              #+#    #+#             */
/*   Updated: 2024/09/14 22:40:37 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		i ++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			p *= -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i ++;
	}
	return (result * p);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	printf ("%d", ft_atoi("  --++-18462  18"));
// 	return (0);
// }
//