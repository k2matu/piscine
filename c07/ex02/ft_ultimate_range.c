/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:54:47 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/29 11:55:40 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * (size));
	if (arr == NULL)
		return (-1);
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (i);
}

/* #include <stdio.h>
int main(void)
{
	int *arr;
	int i;

	i = 0;
	int min = 9;
	int max = 9;
	i = ft_ultimate_range(&arr, min, max);
	printf("%d\n", i);

	if (arr == NULL)
		printf("ARR is null");
	return (0);
} */
