/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:28:36 by okarejok          #+#    #+#             */
/*   Updated: 2023/08/20 20:17:07 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	fill_row_four(int tab[4][4], int i, int row)
{
	int	tower_size;

	tower_size = 1;
	if (i < 4)
	{
		row = 0;
		while (row < 4)
		{
			tab[row][i] = tower_size;
			tower_size++;
			row++;
		}
	}
	else if (i > 3 && i < 8)
	{
		row = 3;
		tower_size = 0;
		while (row >= -1)
		{
			tab[row][i] = tower_size;
			tower_size++;
			row--;
		}
	}
}

void	fill_col_four(int tab[4][4], int i, int column)
{
	int	tower_size;

	tower_size = 1;
	if (i > 7 && i < 12)
	{
		column = -1;
		tower_size = 0;
		while (column < 4)
		{
			tab[8 - i][column] = tower_size;
			tower_size++;
			column++;
		}
	}
	else if (i > 11 && i < 16)
	{
		column = 3;
		tower_size = 0;
		while (column >= -1)
		{
			tab[8 - i][column] = tower_size;
			tower_size++;
			column--;
		}
	}
}

void	fill_one(int tab[4][4], int i)
{
	int	tower_size;

	tower_size = 4;
	if (i < 4)
		tab[0][i] = tower_size;
	else if (i > 3 && i < 8)
		tab[3][i -4] = tower_size;
	else if (i > 7 && i < 12)
		tab[i - 8][0] = tower_size;
	else if (i > 11 && i < 16)
		tab[i - 12][3] = tower_size;
}

int	match_nbr(int tab[4][4], int input[16], int i)
{
	int	row;
	int	column;

	row = 0;
	column = 0;
	if (input[i] == 4)
	{
		fill_row_four(tab, i, row);
		fill_col_four(tab, i, column);
	}
	else if (input[i] == 1)
	{
		fill_one(tab, i);
	}
	return (0);
}
