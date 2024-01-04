/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:02:55 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/26 21:06:05 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

<<<<<<< HEAD
/* #include <stdio.h>
int main(void)
{	
	int i = 0;
	while (i < 14)
	{
    	printf("%d = %d \n", i, (ft_recursive_factorial(i)));
		i++;
	}
	printf("%d", ft_recursive_factorial(-1));
	return 0;
}  */
=======
#include <stdio.h>
int main(void)
{
	int i = 0;
	while (i < 13)
	{
		printf("%d \n", (ft_recursive_factorial(i)));
		i++;
	}
}
>>>>>>> 779aebf4c60473ecb1e77f7b93f78b47188f8015
