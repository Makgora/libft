#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*p_tmp;

	if ((p_tmp = malloc(sizeof(char) * n)) == NULL)
		return (NULL);
	ft_memcpy(p_tmp, src, n);
	ft_memcpy(dest, p_tmp, n);
	free(p_tmp);
	return (dest);
}
