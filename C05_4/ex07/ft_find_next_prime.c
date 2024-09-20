/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:27:03 by ktei              #+#    #+#             */
/*   Updated: 2024/09/11 21:53:18 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (i >= 0)
	{
		if (ft_is_prime(nb + i) == 1)
			return (nb + i);
		i ++;
	}
	return (0);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int	temp = ft_find_next_prime(-1123679);
//
// 	printf ("%d", temp);
// }
//