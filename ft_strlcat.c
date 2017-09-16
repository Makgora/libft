#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	dst_left;
	char	*p_dst;
	char	*p_src;
	
	p_dst = dst;
	p_src = (char *)src;
	dst_left = dst_size;
	//Calcul de la taille (écrite) de dst
	while (*p_dst != '\0' && dst_left != 0)
	{
		p_dst++;
		dst_left--;
	}
	dst_len = p_dst - dst;
	//Calcul de la taille (libre) de dst
	dst_left = dst_size - dst_len - 1;
	//Si dst_left = 0, return direct la taille dst + taille de src
	if (dst_left == 0)
		return (dst_len + ft_strlen(src));
	//Si il reste de la place, src dans dst, on va au bout de src
	while (*p_src != '\0')
	{
		if (dst_left > 1)
		{
			*p_dst++ = *p_src;
			dst_left--;
		}
		p_src++;
	}
	*p_dst = '\0';
	//Return la taille de dst + la taille de src (sans le null final)
	return (dst_len + (p_src - src));

}
