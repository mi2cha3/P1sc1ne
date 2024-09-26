/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:15:37 by ktei              #+#    #+#             */
/*   Updated: 2024/09/09 22:37:17 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	num;
	char			digit1;
	char			digit2;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			write(1, &str[i], 1);
		}
		else
		{
			num = (unsigned char)str[i];
			digit1 = "0123456789abcdef"[num / 16];
			digit2 = "0123456789abcdef"[num % 16];
			write (1, "\\", 1);
			write (1, &digit1, 1);
			write (1, &digit2, 1);
		}
		i ++;
	}
}

// int	main(void)
// {
// 	ft_putstr_non_printable ("Coucou\ntu va\ns bien ?");
// 	return (0);
// }
//