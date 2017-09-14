#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*p_dest;

	p_dest = dest;
	while (*p_dest != '\0')
		p_dest++;
	while (*src != '\0' && n > 0)
	{
		*p_dest = *src;
		p_dest++;
		src++;
		n--;	
	}
	*(++p_dest) = '\0';
	return (dest);
}
