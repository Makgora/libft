#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*p_dest;

	p_dest = dest;
	while (*src != '\0' && n-- > 0)
		*p_dest++ = *src++;
	while (n-- > 0)
		*p_dest++ = '\0';
	return (dest);
}

