/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:41:30 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/24 16:34:24 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}


#include <stdio.h>
#include <string.h>
int main()
{
	// declaring two same string
	char *first_str = "fefwa";
	char *second_str = "fe";

	// printing the strings
	printf("First String: %s\n", first_str);
	printf("Second String: %s\n", second_str);

	// printing the return value of the strcmp()
	printf("Return value of strcmp(): %d \n",
		   strcmp(first_str, second_str));

	int i;

	i = ft_strcmp(first_str, second_str);
	printf("Return value of FTstrcmp(): %d", i);

	return 0;
} 
