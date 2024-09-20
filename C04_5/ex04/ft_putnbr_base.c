/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:08:03 by ktei              #+#    #+#             */
/*   Updated: 2024/09/17 19:10:25 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	core(int nbr, char *base, int len)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		core(-(nbr / len), base, len);
		ft_putchar(base[-(nbr % len)]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= len)
	{
		core(nbr / len, base, len);
	}
	ft_putchar(base[nbr % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	k;
	int	len;

	i = 0;
	if (!base[0] || !base[1])
		return ;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		k = i + 1;
		while (base[k])
		{
			if (base[i] == base[k])
				return ;
			k++;
		}
		i++;
	}
	len = 0;
	while (base[len])
		len++;
	core(nbr, base, len);
}

// int	main(void)
// {
// 	ft_putnbr_base(-12, "\0\0saa");
// }
//
// void	ft_putnbr_base(int nbr, char *base)
// {
// 	const size_t	base_len = ft_strlen(base);
// 	char			buf[34];
// 	size_t			i;
// 	unsigned int	n;
//
// 	if (base_len < 2 || 0)
// 		return 0;
// 	i = sizeof(buf);
// 	if (nbr < 0)
// 		n = -nbr;
// 	else
// 		n = nbr;
// 	buf[--i] = '\0';
// 	while (1)
// 	{
// 		buf[--i] = base[n % base_len];
// 		n /= base_len;
// 		if (!n)
// 			break;
// 	}
// 	if (nbr < 0)
// 		buf[--i] = '-';
// 	ft_puttr(buf);
// }