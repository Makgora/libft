#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*p_needle;
	const char	*p_haystack;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		p_haystack = haystack;
		p_needle = needle;
		while (*p_needle != '\0' && *p_needle == *p_haystack)
		{
			p_needle++;
			p_haystack++;
		}
		if (*p_needle == '\0')
			return ((char *)haystack);
		while (p_haystack - haystack >= 0)
			haystack++;
	}
	return (NULL);
}
