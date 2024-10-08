/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:56:49 by ktei              #+#    #+#             */
/*   Updated: 2024/09/05 16:33:09 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int	n1;
// 	int	n2;
//
// 	n1 = 100;
// 	n2 = 200;
// 	printf ("%d, %d\n", n1, n2);
// 	ft_swap(&n1, &n2);
// 	printf ("%d, %d\n", n1, n2);
// 	return (0);
// }
//