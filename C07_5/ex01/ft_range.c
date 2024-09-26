/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:06:27 by ktei              #+#    #+#             */
/*   Updated: 2024/09/16 17:38:18 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*output;
	int	i;

	if (min >= max)
		return (NULL);
	output = (int *)malloc(sizeof(int) * (max - min));
	if (!output)
		return (NULL);
	i = 0;
	while (i <= max - min - 1)
	{
		output[i] = min + i;
		i++;
	}
	return (output);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int	*test = ft_range(2, 5);
// 	int	i = 0;
//
// 	while (test[i])
// 	{
// 		printf("%d", test[i]);
// 		i++;
// 	}
// 	return (0);
// }
//