/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:05:01 by ktei              #+#    #+#             */
/*   Updated: 2024/09/10 12:25:44 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (src[k] != '\0' && k < nb)
	{
		dest[i] = src[k];
		i ++;
		k ++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char	dest[100] = "Hello ";
// 	char	*src = "World!";
//
// 	ft_strncat(dest, src, 4);
// 	printf ("%s\n", dest);
// 	return (0);
// }
//