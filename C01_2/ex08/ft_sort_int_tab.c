/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:59:20 by ktei              #+#    #+#             */
/*   Updated: 2024/09/07 21:38:24 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;

	i = 0;
	while (i < size - 1)
	{
		k = i + 1;
		while (k < size)
		{
			if (tab[i] > tab[k])
			{
				swap(&tab[i], &tab[k]);
			}
			k ++;
		}
		i ++;
	}
}

// #include <stdio.h>
//
// int main(void)
// {
// 	int	i = 0;
// 	int size = 5;
// 	int	queue[] = {7,3,8,2,9};
// 	ft_sort_int_tab(queue, size);
// 	while(i < 5)
// 	{
// 		printf("%d", queue[i]);
// 		i ++;
// 	}
// }
//