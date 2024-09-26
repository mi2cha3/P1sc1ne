/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:49:57 by ktei              #+#    #+#             */
/*   Updated: 2024/09/11 21:01:36 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	int 	a;
	char	sample[28];
	// __builtin_memset(sample, '*', sizeof(sample));
	__builtin_strncpy(sample, "HelloWorle1234", 8);
	printf ("%s", sample);
	return (0);
}
// HelloWord