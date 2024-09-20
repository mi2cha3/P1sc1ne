/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:31:24 by ktei              #+#    #+#             */
/*   Updated: 2024/09/10 13:14:44 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i + k] == to_find[k] && to_find[k] != '\0')
		{
			k ++;
		}
		if (to_find[k] == '\0')
			return (&str[i]);
		i ++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*str = "abcdefg";
// 	char	*to_find = "bcd";
// 	char	*test = ft_strstr(str, to_find);
//
// 	printf("%s\n", test);
// }
//