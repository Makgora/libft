#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*p_dest;
	const char	*p_src;

	p_dest = (char *)dest;
	p_src = (const char *)src;
	while (*p_src != c && n > 0)
	{
		*p_dest = *p_src;
		p_dest++;
		p_src++;
		n--;
	}
	p_dest++;
	return (n > 0 ? p_dest : NULL);
}
