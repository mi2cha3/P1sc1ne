/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:39:33 by ktei              #+#    #+#             */
/*   Updated: 2024/09/08 11:02:52 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char	sample[] = "aaa";
// 	ft_strcpy(sample, "iuiui");
// 	printf ("%s", sample);
// 	//printf ("%d", sample[2]);
// 	return (0);
// }
//