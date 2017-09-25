#include "libft.h"

size_t	get_length(int n)
{
	size_t	size;

	size = 0;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	str_len;
	
	if (n < 0)
	{
		str_len = get_length(n) + 1;
		str = ft_strnew(str_len);
		*str = '-';
	}
	else
	{
		str_len = get_length(n);
		str = ft_strnew(str_len);
	}
	while (n != 0)
	{
		str[str_len - 1] = n % 10;
		n /= 10;
		str_len--;
	}
	return (str);
}
