/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:19:50 by ktei              #+#    #+#             */
/*   Updated: 2024/09/13 10:26:13 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;
	unsigned int	k;

	d_len = 0;
	while (dest[d_len] != '\0')
		d_len ++;
	s_len = 0;
	while (src[s_len] != '\0')
		s_len ++;
	if (size <= d_len)
		return (size + s_len);
	i = d_len;
	k = 0;
	while (src[k] != '\0' && i < size -1)
	{
		dest[i] = src[k];
		i ++;
		k ++;
	}
	dest[i] = '\0';
	return (d_len + s_len);
}

#include <stdio.h>

int	main(void)
{
	char			dest[20] = "aiueo";
	char			*src = "kakikukeko";
	unsigned int	size = 6;
	unsigned int	temp = ft_strlcat(dest, src, size);

	printf ("%d\n", temp);
	printf ("%s", dest);
	return (0);
}
