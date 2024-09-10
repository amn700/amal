#include "libft.h"

int	count(char *str, size_t len)
{
	size_t	i;

	i = 0;
	while (str[i] && i < len)
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				size;
	char			*new;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	size = count(&s[start], len);
	new = malloc(size + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[size] = '\0';
	return (new);
}
