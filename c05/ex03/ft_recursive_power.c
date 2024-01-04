/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:53:49 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/26 21:32:58 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int fact;

	fact = nb;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
<<<<<<< HEAD
	else if (power == 1)
		return (nb);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}

/* #include <stdio.h>
int main(void)
{	
	printf("%d", ft_recursive_power(19, 2));
	return (0);
}  */
=======
	else if (power >= 1)
	{
		fact *= (ft_recursive_power(fact, power - 1));
		return (fact);
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_recursive_power(0, 0));
	return (0);
}
>>>>>>> 779aebf4c60473ecb1e77f7b93f78b47188f8015
