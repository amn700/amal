#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	size;
	char	*new;

	if (s == NULL)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	new = malloc(size + 1);
	if (new == NULL)
		return (NULL);
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
