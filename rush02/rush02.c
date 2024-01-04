/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:25:30 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/27 16:20:02 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int		validation(int argc, char **argv);
void	ft_putstr(char *str);
void	read_dict(char **arr, int i, int j);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = 0;
	arr = (char **)malloc(50 * sizeof(char *));
	while (i < 50)
	{
		arr[i] = (char *)malloc(50 * sizeof(char));
		i++;
	}
	if (validation(argc, argv) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	read_dict(arr, 0, 0);
	free(arr);
	return (0);
}
