#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int	n;
	int 		sign;

	sign = 1;
	n = 0;
	while (*nptr == ' ' || *nptr == '\t' 
			|| *nptr == '\n' || *nptr == '\r' 
			|| *nptr == '\v' || *nptr == '\f')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit((int)*nptr) == 1)
	{
		n = 10 * n + (*nptr - '0');
		nptr++;
	}
	return (n * sign);
}
