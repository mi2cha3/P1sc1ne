/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:20:34 by ktei              #+#    #+#             */
/*   Updated: 2024/09/25 16:37:36 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

// int	ft_hoge(char *c)
// {
// 	int	i;
//
// 	i = 0;
// 	while (c[i])
// 	{
// 		if (c[i] != 'a')
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	char *tab[] = {"b", "a", "b", NULL};
// 	int test = ft_any(tab, ft_hoge);
// 	printf("%d", test);
// }