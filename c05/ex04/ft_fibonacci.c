/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:15:04 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/26 21:50:55 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index <= 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + (ft_fibonacci(index - 2)));
}

/* #include <stdio.h>
int	main(void)
{
	int i = 0;
	while (i < 14)
	{
		printf("%d = %d \n", i, ft_fibonacci(2432));
		i++;
	}
	printf("negativ number %d \n",ft_fibonacci(-2));
	return (0);
}  */