/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:12:29 by ktei              #+#    #+#             */
/*   Updated: 2024/09/25 22:36:21 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		k;
	int		size;
	char	*temp;

	i = 0;
	while (tab[i])
		i++;
	size = i;
	k = 0;
	while (k < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		k++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*tab[] = {"cat", "dog", "bird", "phoenix", 0};
//
// 	ft_sort_string_tab(tab);
// 	int	i = -1;
// 	while (tab[++i])
// 		printf("%s\n", tab[i]);
// 	return (0);
// }
//