/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:20:18 by ktei              #+#    #+#             */
/*   Updated: 2024/09/18 14:51:29 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	proceed(char *str, int *i, int *flag)
{
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			*flag *= -1;
		(*i)++;
	}
	return (*i);
}

int	check_valid(char *str, char *base, int i)
{
	int	k;
	int	flag;

	k = 0;
	flag = 0;
	while (base[k])
	{
		if (str[i] == base[k])
			flag = 1;
		k++;
	}
	if (flag == 1)
		return (0);
	else
		return (1);
}

int	convert(char *str, char *base, int len)
{
	int	result;
	int	i;
	int	k;
	int	flag;

	i = 0;
	result = 0;
	flag = 1;
	proceed(str, &i, &flag);
	while (str[i])
	{
		if (check_valid(str, base, i) == 1)
			break ;
		k = 0;
		while (base[k])
		{
			if (str[i] == base[k])
				result = result * len + k;
			k++;
		}
		i++;
	}
	return (result * flag);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	k;
	int	len;

	i = 0;
	if (!base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		k = i + 1;
		while (base[k])
		{
			if (base[i] == base[k])
				return (0);
			k++;
		}
		i++;
	}
	len = 0;
	while (base[len])
		len++;
	return (convert(str, base, len));
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	int	temp = ft_atoi_base(argv[1], argv[2]);

// 	printf("%d", temp);
// }

// int	main(void)
// {
// 	int	temp = ft_atoi_base("12345", "1946437\t");
// 	printf("%d", temp);
// }
