#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (s == NULL)
	{
		return (NULL);
	}
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i - 1] == (char)c)
			return ((char *)&s[i - 1]);
		i--;
	}
	return (NULL);
}
