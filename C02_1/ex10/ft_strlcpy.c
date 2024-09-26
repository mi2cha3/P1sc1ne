/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:26:25 by ktei              #+#    #+#             */
/*   Updated: 2024/09/13 09:54:19 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i ++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i ++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char			dest[50];
	unsigned int	temp;

	temp = ft_strlcpy(dest, "aiueokakikukeko", 2);
	printf ("%d\n", temp);
	printf ("%s", dest);
	return (0);
}
