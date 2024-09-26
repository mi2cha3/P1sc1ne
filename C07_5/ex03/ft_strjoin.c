/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:00:51 by ktei              #+#    #+#             */
/*   Updated: 2024/09/24 12:50:31 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strscat(int size, char **strs, char *sep, char *dest)
{
	int		i;
	int		k;
	int		l;

	i = 0;
	l = 0;
	while (i < size)
	{
		if (strs[i] != NULL)
		{
			k = 0;
			while (strs[i][k])
				dest[l++] = strs[i][k++];
			if (i < size - 1)
			{
				k = 0;
				while (sep[k])
					dest[l++] = sep[k++];
			}
		}
		i++;
	}
	dest[l] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		strs_len;
	int		sep_len;
	int		i;
	char	*dest;

	strs_len = 0;
	sep_len = ft_strlen(sep);
	if (size == 0)
	{
		dest = (char *)malloc(1);
		if (dest)
			*dest = '\0';
		return (dest);
	}
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	dest = (char *)malloc(sizeof(char) * (strs_len + sep_len * (size - 1) + 1));
	if (!dest)
		return (NULL);
	ft_strscat(size, strs, sep, dest);
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*strs[] = {"Hello", "World", "42Tokyo", 0};
// 	char	*sep = "//";
// 	char	*dest = ft_strjoin(3, strs, sep);

// 	if (dest)
// 	{
// 		printf("%s\n", dest);
// 		free(dest);
// 	}
// 	return (0);
// }