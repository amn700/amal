#include "libft.h"

static int	included(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	count_size(char *str, char *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!included(str[i], set))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	char	*new;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	size = count_size((char *)s1, (char *)set);
	new = malloc(size + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		if (!included(*s1, (char *)set))
			new[i++] = *s1;
		s1++;
	}
	return (new);
}
