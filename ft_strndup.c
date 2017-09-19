#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*new_s;
	
	new_s = ft_strnew(n);
	return (ft_memcpy(new_s, s, n));
}
