#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	total;

	if (nptr == NULL)
		return (0);
	i = 0;
	sign = 1;
	total = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		total = total * 10 + (nptr[i] - '0');
		i++;
	}
	return (total * sign);
}
