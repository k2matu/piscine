/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:55:05 by kmatjuhi          #+#    #+#             */
/*   Updated: 2023/08/29 15:12:34 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	dest = ((char *)malloc(sizeof(char) * size + 1));
	if (dest == NULL)
		return (0);
	while (i < size && size != 0)
	{
		j = 0;
		while (strs[i][j] != '\0')
			dest[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			dest[k++] = sep[j++];
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

/* #include <stdio.h>
int	main(void)
{
	char *dest;
    int size = 0;
     char *name[5] = {
        "Hello", 
        "You", 
        "Are", 
        "World",
        "Check"
    };

	char *name[0] = {};
	int i = 0;
	dest = ft_strjoin(size, name, "$--$");
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
	if (dest[i] == '\0')
		printf("Empty string");
	return (0);
} */
