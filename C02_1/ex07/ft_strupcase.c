/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:05:22 by ktei              #+#    #+#             */
/*   Updated: 2024/09/09 11:27:39 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
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
// 	char	test[] = "abcde00";
//
// 	temp = ft_strupcase(test);
// 	printf("%s", temp);
// 	return (0);
// }
//