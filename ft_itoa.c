#include "libft.h"

size_t	get_length(long int nb)
{
	size_t	size;

	size = 0;
	while (nb > 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		str_len;
	long int	nb;

	nb = (long int)n;
	if (nb < 0)
	{
		nb *= -1;
		str_len = get_length(nb) + 1;
		str = ft_strnew(str_len);
		*str = '-';
	}
	else
	{
		str_len = get_length(nb);
		str = ft_strnew(str_len);
	}
	if (nb == 0)
		*str = '0';
	while (nb > 0)
	{
		str[str_len - 1] = nb % 10 + '0';
		nb /= 10;
		str_len--;
	}
	return (str);
}
