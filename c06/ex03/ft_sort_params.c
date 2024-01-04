#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

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

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	char	*temp;

	i = 0;
	j = 0;
	while (i < argc)
	{
		while (j < (argc - 1 - i))
		{
			if (ft_strcmp(argv[j + 1], argv[j + 2]) < 0)
			{
				temp = argv[j + 1];
				argv[j + 1] = argv[j + 2];
				argv[j + 2] = temp;
			}
			j++;
		}
		i++;
	}

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}