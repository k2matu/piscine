/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:54:31 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/29 11:54:34 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	i;

	i = 0;
	arr = NULL;
	if (min >= max)
		return (arr);
	range = max - min;
	arr = (int *)malloc(sizeof(int) * (range));
	if (arr == NULL)
		return (arr);
	while (i < range)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

/* #include <stdio.h>
int main(void)
{
	int *arr;
	int i;

	i = 0;
	int min = 9;
	int max = 9;
	arr = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d = %d\n", i, arr[i]);
		i++;
	}
	if (arr == NULL)
		printf("arr is null");
	return (0);
}  */
