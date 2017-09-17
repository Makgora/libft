#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	start;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	       i++;
	start = i;
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
		i++;
	return (ft_strsub(s, start, i - start));
}
