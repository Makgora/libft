#include "libft.h"

int	ft_strclen(const char *s, char c)
{
	size_t	s_len;

	s_len = 1;
	while (s[s_len] != c && s[s_len] != '\0')
		s_len++;
	return (s[s_len] == '\0' ? 0 : s_len);
}
