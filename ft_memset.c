#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	if (s == NULL)
		return (NULL);
	temp = s;
	i = 0;
	while (i < n)
		temp[i++] = (unsigned char)c;
	return (s);
}
