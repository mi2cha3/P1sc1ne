/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:41:11 by ktei              #+#    #+#             */
/*   Updated: 2024/09/17 10:56:20 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!*range)
	{
		return (-1);
	}
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int	*range;
// 	int	temp = ft_ultimate_range(&range, 2, 9);
// 	int	i = 0;
//
// 	while (range[i])
// 	{
// 		printf("%d", range[i]);
// 		i++;
// 	}
// 	printf("\n%d", temp);
// 	return (0);
// }
//