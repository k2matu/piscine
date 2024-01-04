/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:57:46 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/26 21:30:39 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i;
	int fact;

	i = 1;
	fact = nb;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		fact *= nb;
		i++;
	}
	return (fact);
}

<<<<<<< HEAD
/* #include <stdio.h>
int	main(void)
=======
#include <stdio.h>
int main(void)
>>>>>>> 779aebf4c60473ecb1e77f7b93f78b47188f8015
{
	printf("%d", ft_iterative_power(423, 1));
	return (0);
<<<<<<< HEAD
}  */
=======
}
>>>>>>> 779aebf4c60473ecb1e77f7b93f78b47188f8015
