/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:50:30 by ktei              #+#    #+#             */
/*   Updated: 2024/09/05 14:29:32 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int	A = 5;
// 	int	B = 2;
//
// 	ft_ultimate_div_mod(&A, &B);
// 	printf("%d, %d", A, B);
//	return (0);
// }