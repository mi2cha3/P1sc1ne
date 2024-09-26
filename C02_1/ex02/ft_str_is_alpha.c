/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:04:14 by ktei              #+#    #+#             */
/*   Updated: 2024/09/09 10:51:45 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
					&& str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int	temp;
// 	char*	test = "1iueo";
//
// 	temp = ft_str_is_alpha(test);
// 	printf("%d", temp);
// 	return (0);
// }
//