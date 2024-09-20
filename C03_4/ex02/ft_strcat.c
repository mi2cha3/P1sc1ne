/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:20:58 by ktei              #+#    #+#             */
/*   Updated: 2024/09/10 12:01:37 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (src[k] != '\0')
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
// 	char	dest[100] = "aiueo";
// 	char	src[] = "kakikukeko";
//
// 	ft_strcat(dest, src);
// 	printf("%s\n", dest);
// 	return (0);
// }
//