/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:43:22 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/24 16:36:58 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}


#include <stdio.h>
#include <string.h>
int main()
{
	// declaring two same string
	char* first_str = "Gewaeaws";
	char* second_str = "Geews";

	// printing the strings
	printf("First String: %s\n", first_str);
	printf("Second String: %s\n", second_str);

	// printing the return value of the strcmp()
	printf("Return value of strcmp(): %d \n",
		   strncmp(first_str, second_str, 10));

	int i;

	i = ft_strncmp(first_str, second_str, 10);
	printf("Return value of strcmp(): %d", i);

	return 0;
} 
