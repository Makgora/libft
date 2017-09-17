#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*p_new;

	new = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!new)
		return (NULL);
	p_new = new;
	while (*s1 != '\0')
		*p_new++ = *s1++;
	while (*s2 != '\0')
		*p_new++ = *s2++;
	return (new);
}
