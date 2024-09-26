/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:05:53 by ktei              #+#    #+#             */
/*   Updated: 2024/09/25 16:16:04 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	i = 0;
	array = (int *)malloc(sizeof(int) * length);
	if (!array)
		return (NULL);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}

// int	ft_hoge(int nb)
// {
// 	return (nb + 1);
// }
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	int tab[] = {1, 2, 3, 4, 5};
// 	int length = 5;
//
// 	int *test = ft_map(tab, length, ft_hoge);
// 	int i = 0;
// 	while (i < length)
// 		printf("%d\n", test[i++]);
// 	return (0);
// }