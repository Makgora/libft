#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*p_big;
	const char	*p_little;
	size_t		len_bis;

	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && len > 0)
	{
		p_big = big;
		p_little = little;
		len_bis = len;
		while (*p_little != '\0' && *p_little == *p_big && len_bis> 0)
		{
			p_little++;
			p_big++;
			len_bis--;
		}
		if (*p_little == '\0')
			return ((char *)big);
		while (p_big - big >= 0 && len > 0)
		{
			big++;
			len--;
		}
	}
	return (NULL);

}
