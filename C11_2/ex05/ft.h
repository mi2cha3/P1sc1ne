/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktei <ktei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:38:52 by ktei              #+#    #+#             */
/*   Updated: 2024/09/25 22:13:23 by ktei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

int		main(int ac, char *av[]);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_plus(int a, int b);
void	ft_sub(int a, int b);
void	ft_divide(int a, int b);
void	ft_times(int a, int b);
void	ft_mod(int a, int b);
void	do_op(char *value1, char *value2, void (*f)(int, int));
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
#endif