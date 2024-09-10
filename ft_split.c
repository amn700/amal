#include "libft.h"

int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

char	*ft_addstr(char **matrix, char *str, char c)
{
	int		i;
	int		count;
	char	*new;

	i = 0;
	count = 0;
	while (str[count] != c && str[count])
		count++;
	new = malloc(count + 1);
	if (!new)
		return (NULL);
	while (i < count)
	{
		new[i] = str[i];
		i++;
	}
	new[count] = '\0';
	return (new);
}

void	populate(char **matrix, char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			matrix[i++] = ft_addstr(matrix, str, c);
		while (*str != c && *str)
			str++;
	}
	matrix[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**matrix;

	size = count_words((char *)s, c);
	matrix = malloc(size + 1);
	if (matrix == NULL)
		return (NULL);
	populate(matrix, (char *)s, c);
	return (matrix);
}
