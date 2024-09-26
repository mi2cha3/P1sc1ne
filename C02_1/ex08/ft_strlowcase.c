/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:28:57 by ktei              #+#    #+#             */
/*   Updated: 2024/09/09 11:30:26 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += ('a' - 'A');
		}
		i ++;
	}
	return (str);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char*	temp;
// 	char	test[] = "ABCDE00";
//
// 	temp = ft_strlowcase(test);
// 	printf("%s", temp);
// 	return (0);
// }
//