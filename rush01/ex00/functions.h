/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:14:06 by okarejok          #+#    #+#             */
/*   Updated: 2023/08/20 20:23:49 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	fill_row_four(int tab[4][4], int i, int row);
void	fill_col_four(int tab[4][4], int i, int column);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		*get_numbers(char *str);
int		match_nbr(int tab[4][4], int input[15], int i);
int		check(int ac, char **av);
#endif
