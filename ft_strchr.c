#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*p_s;

	p_s = (const char *)s;
	while (*p_s != c && *p_s != '\0')
		p_s++;
	return (*p_s == '\0' ? NULL : p_s);
}
