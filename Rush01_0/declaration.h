/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declaration.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skamijo <skamijo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:41:04 by okamototake       #+#    #+#             */
/*   Updated: 2024/09/15 14:28:41 by skamijo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DECLARATION_H
# define DECLARATION_H

# include <stdlib.h>
# include <unistd.h>

// arg_parse.c
int		arg_chk(int ac, char **av);
int		*get_value(char *str, int n);

// calculate.c
int		calculate(int **matrix, int *value, int dim, int id);

// chk_dupes.c
int		chk_duplication(int **matrix, int dim, int id, int bld_height);

// chk_visible_bld_count.c
// int	chk_col_up(int **matrix, int dim, int id, int *value);
// int	chk_col_down(int **matrix, int dim, int id, int *value);
// int	chk_row_left(int **matrix, int dim, int id, int *value);
// int	chk_row_right(int **matrix, int dim, int id, int *value);
int		chk_visible_bld_count(int **matrix, int dim, int id, int *value);

// common_funcs.c
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

// main.c
// int	main(int argc, char **argv);

// manage_memory.c
int		**allocate_matrix_mem(int dim);
void	freeing(int *value, int **matrix);

// output_answer.c
void	output_answer(int **matrix, int dim);

#endif