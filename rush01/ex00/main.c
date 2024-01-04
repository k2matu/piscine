/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:15:43 by okarejok          #+#    #+#             */
/*   Updated: 2023/08/20 20:25:10 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	solve(int tab[4][4], int input[15])
{
	int	i;

	i = -1;
	while (i++ < 16)
		match_nbr(tab, input, i);
	return (1);
}

void	display_solution(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(grid[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	tab[4][4];
	int	i;
	int	j;
	int	*input;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	if (check(argc, argv) == 1)
		return (0);
	input = get_numbers(argv[1]);
	if (solve(tab, input) == 1)
		display_solution(tab);
	else
		ft_putstr("Did not find any solutions\n");
	return (0);
}
