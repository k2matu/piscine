/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:02:10 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/26 21:04:13 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	i = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}

<<<<<<< HEAD
/* #include <stdio.h>
int main(void)
{	
	int i = 0;
	while (i < 14)
	{
    	printf("%d = %d \n", i, (ft_iterative_factorial(i)));
		i++;
	}
	printf("%d", ft_iterative_factorial(-1));
	return 0;
} 
 */
=======
#include <stdio.h>
int main(void)
{
	int i = 0;
	while (i < 13)
	{
		printf("%d \n", (ft_iterative_factorial(i)));
		i++;
	}
}
>>>>>>> 779aebf4c60473ecb1e77f7b93f78b47188f8015
