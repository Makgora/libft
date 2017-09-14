#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p_s;

	p_s = (char *)s;
	while (*p_s != c && n > 0)
	{
		p_s++;
		n--;
	}
	return (n > 0 ? p_s : NULL);
}

