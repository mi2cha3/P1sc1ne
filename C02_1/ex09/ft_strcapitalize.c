/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:31:54 by ktei              #+#    #+#             */
/*   Updated: 2024/09/09 22:37:43 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= ('a' - 'A');
	}
	while (str[i + 1] != '\0')
	{
		if (((str[i] >= ' ' && str[i] <= '/') || (str[i] >= ':'
					&& str[i] <= '@') || (str[i] >= '[' && str[i] <= '`')
				|| (str[i] >= '{' && str[i] <= '~')) && (str[i + 1] >= 'a'
				&& str[i + 1] <= 'z'))
		{
			str[i + 1] -= ('a' - 'A');
		}
		if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
					&& str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
			&& (str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
		{
			str[i + 1] += ('a' - 'A');
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char	*temp;
// 	char	test[] = "salut, comment tu vas ? 42mots 5H quarante-deux; 
//cinquante+et+unX";
//
// 	temp = ft_strcapitalize(test);
// 	printf("%s", temp);
// 	return (0);
// }
//