#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*new_s;
	
	s_len = ft_strlen(s);
	new_s = ft_strnew(s_len);
	return (ft_memcpy(new_s, s, s_len));
}
