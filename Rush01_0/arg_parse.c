/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:19:47 by skamijo           #+#    #+#             */
/*   Updated: 2024/09/18 15:16:41 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declaration.h"

int	arg_chk(int argc, char **argv)
{
	int	len;
	int	i;

	if (argc != 2)
		return (-2);
	len = ft_strlen(argv[1]);
	i = 4;
	while (i <= 9)
	{
		if (len == i * 4 * 2 - 1)
			return ((len + 1) / 2);
		i++;
	}
	return (-1);
}

int	*get_value(char *str, int n)
{
	int	i;
	int	j;
	int	*value;

	value = malloc(sizeof(int) * n);
	if (!value)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			value[j] = ft_atoi(str + i);
			j++;
		}
		i++;
	}
	return (value);
}
