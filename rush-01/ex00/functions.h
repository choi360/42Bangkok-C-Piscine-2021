/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:02:22 by psomjitr          #+#    #+#             */
/*   Updated: 2021/10/31 21:02:44 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H_
#define FUNCTION_H_

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_atoi(char *str);
int	ft_strlen(char *str);
int	*ft_get_argv(char *str);
int	ft_solve(int table[4][4], int entry[16], int position);
int	check_duplicate(int table[4][4], int position, int height);
int	check_cases(int table[4][4], int position, int entry[16]);
int	check_col_up(int table[4][4], int position, int entry[16]);
int	check_col_down(int table[4][4], int position, int entry[16]);
int	check_row_left(int table[4][4], int position, int entry[16]);
int	check_row_right(int table[4][4], int position, int entry[16]);
void	ft_display(int table[4][4]);

#endif
