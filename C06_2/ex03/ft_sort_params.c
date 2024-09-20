/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:48:51 by ktei              #+#    #+#             */
/*   Updated: 2024/09/15 22:52:55 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	ft_print_params(int argc, char *argv[])
{
	int	i;
	int	k;

	i = 1;
	while (i <= argc - 1)
	{
		k = 0;
		while (argv[i][k])
		{
			ft_putchar(argv[i][k]);
			k ++;
		}
		ft_putchar('\n');
		i ++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		k;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		k = i + 1;
		while (argv[k])
		{
			if (ft_strcmp(argv[i], argv[k]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[k];
				argv[k] = temp;
			}
			k ++;
		}
		i ++;
	}
	ft_print_params(argc, argv);
	return (0);
}
