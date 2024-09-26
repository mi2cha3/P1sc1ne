/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:42:36 by ktei              #+#    #+#             */
/*   Updated: 2024/09/26 12:53:08 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (!tab || length <= 1 || !f)
		return (1);
	while (i < length - 1 && f(tab[i], tab[i + 1]) == 0)
		i++;
	if (i == length - 1)
		return (1);
	if (i < length - 1 && f(tab[i], tab[i + 1]) > 0)
		flag = 1;
	if (i < length - 1 && f(tab[i], tab[i + 1]) < 0)
		flag = -1;
	while (i < length - 1)
	{
		if (flag == 1 && f(tab[i], tab[i + 1]) < 0)
			return (0);
		if (flag == -1 && f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_cmp(int a, int b)
{
	if (a == b)
		return (0);
	return (a - b);
}

// int	main(void)
// {
// 	int tab[] = {5,4,3,3,3};
// 	int length = 5;
// 	int test = ft_is_sort(tab, length, ft_cmp);
// 	printf("%d", test);
// }