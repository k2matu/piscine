/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:25:19 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/27 16:15:30 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char	ft_putstr(char *str);

void	read_dict(char **arr, int i, int j)
{
	int		k;
	int		fd;
	char	*c;
	ssize_t	bytes_read;

	k = 0;
	c = (char *)malloc(500 * sizeof(char));
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		ft_putstr("Dict Error\n");
	bytes_read = read(fd, c, 500);
	while (k < bytes_read)
	{
		arr[i][j++] = c[k++];
		if (c[k] == '\n')
		{
			arr[i++][j] = '\0';
			j = 0;
			k++;
		}
	}
	close(fd);
	free(c);
}
