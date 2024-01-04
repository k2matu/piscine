/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:02:17 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/26 21:58:28 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		if (i > 46340)
			return (0);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
int main(void)
{
	printf("%d", ft_sqrt(209764));
	return (0);
} */
