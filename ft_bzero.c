#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	char	*p_s;

	p_s = (char *)s;
	while (n-- > 0)
	{
		*p_s = '\0';
		p_s++;
	}
	return (s);
}
