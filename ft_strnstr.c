#include "libft.h"

static int	included(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (*s1 && *s2)
	{
		if ((unsigned char)*s1 == (unsigned char)*s2)
		{
			s1++;
			s2++;
		}
		else
			return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!big || !little)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (included(&big[i], little) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
