#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;

	new = ft_strnew(len);
	if (!new)
		return (NULL);
	new = ft_strncpy(new, &s[start], len);
	return (new);
}
