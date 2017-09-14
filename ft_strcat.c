#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
		char	*p_dest;

		p_dest = dest;
		while (*p_dest != '\0')
			p_dest++;
		while (*src != '\0')
			*p_dest++ = *src++;
		*(++p_dest) = '\0';
		return (dest);
}
