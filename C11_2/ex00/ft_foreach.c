/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:38:50 by ktei              #+#    #+#             */
/*   Updated: 2024/09/25 22:12:53 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// #include <stdio.h>
//
// void	ft_hoge(int nb)
// {
// 	printf("%d\n", nb + 1);
// }
//
// int	main(void)
// {
// 	int	length;
// 	int	tab[] = {1, 2, 3, 4, 5};
//
// 	length = 5;
// 	ft_foreach(tab, length, ft_hoge);
// 	return (0);
// }
//