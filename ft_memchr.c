#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	if (s == NULL)
		return ((void *) NULL);
	i = 0;
	temp = s;
	while (i < n && temp[i])
	{
		if (temp[i] == (unsigned char)c)
			return ((void *) &temp[i]);
		i++;
	}
	return ((void *) NULL);
}
