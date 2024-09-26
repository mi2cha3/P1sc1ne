/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:28:55 by ktei              #+#    #+#             */
/*   Updated: 2024/09/25 10:53:48 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i] && !is_charset(str[i], charset))
		{
			count++;
			while (str[i] && !is_charset(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_charset(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	words = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!words)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i] && !is_charset(str[i], charset))
		{
			words[j] = malloc_word(&str[i], charset);
			if (!words[j])
				return (NULL);
			j++;
			while (str[i] && !is_charset(str[i], charset))
				i++;
		}
	}
	words[j] = NULL;
	return (words);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char	**test;
//
// 	test = ft_split("/abc/def/ghi/", "/");
// 	int		i = -1;
//	
// 	while (test[++i])
// 	printf("%s\n", test[i]);
// 	return (0);
// }
//