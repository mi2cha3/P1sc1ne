/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:38:08 by ktei              #+#    #+#             */
/*   Updated: 2024/09/25 16:41:39 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

// int	ft_hoge(char *c)
// {
// 	int	i;

// 	i = 0;
// 	while (c[i])
// 	{
// 		if (c[i] != 'a')
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char *tab[] = {"b", "a", "a", NULL};
// 	int test = ft_count_if(tab, 3, ft_hoge);
// 	printf("%d", test);
// }