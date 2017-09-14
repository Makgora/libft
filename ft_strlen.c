#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	s_len;
	
	s_len = 0;
	while(s[s_len] != '\0')
		s_len++;
	return (s_len);
}
