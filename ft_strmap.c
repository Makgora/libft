#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;

	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	while (*s != '\0')
		*new++ = f(*s++);
	return (new);
}
