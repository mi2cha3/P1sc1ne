/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:59:35 by ktei              #+#    #+#             */
/*   Updated: 2024/09/12 15:29:38 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	k;

	k = 0;
	while (k < (size / 2))
	{
		temp = tab[k];
		tab[k] = tab[size - 1 - k];
		tab[size - 1 - k] = temp;
		k++;
	}
}

// int	main(void)
// {
// 	int	temp;
//
// 	temp = 13579;
// 	int	temp1[]={1,3,5,7,9};
// 	ft_rev_int_tab(temp1, 5);
// 	for(int i=0;i<5;i++){
// 		printf("%d", temp1[i]);
// 	}
// }
