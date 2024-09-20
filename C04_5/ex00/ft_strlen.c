/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:17:38 by ktei              #+#    #+#             */
/*   Updated: 2024/09/10 16:22:46 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

//#include <stdio.h>
//
// int	main(void)
// {
// 	int	temp = ft_strlen("aiueo");
//
// 	printf ("%d", temp);
// 	return (0);
// }
//