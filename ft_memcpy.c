#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char		*p_str1;
	const char	*p_str2;
	
	p_str1 = (char *)str1;
	p_str2 = (const char *)str2;
	while (n-- > 0)
		*p_str1++ = *p_str2++;
	return (str1);
}
