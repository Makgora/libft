#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*p_str;

	p_str = (char *)str;
	while(n > 0)
	{
		*p_str = (unsigned char)c;
		p_str++;
		n--;
	}
	return (str);
}
