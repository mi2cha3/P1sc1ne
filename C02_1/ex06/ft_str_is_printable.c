/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:01:53 by ktei              #+#    #+#             */
/*   Updated: 2024/09/09 11:04:15 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= ' ' && str[i] <= '~')))
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