/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:10:39 by ktei              #+#    #+#             */
/*   Updated: 2024/09/16 13:22:53 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (((s1[i] != '\0' || s2[i] != '\0')) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i ++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	int	temp = ft_strncmp("abcd", "abcf", 6);
// 	int	temp2 = strncmp ("abcd", "abcf", 6);
// 	printf ("%d\n", temp);
// 	printf ("%d\n", temp2);
// }
//