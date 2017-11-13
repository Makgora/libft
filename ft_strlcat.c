/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tparand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:45:20 by tparand           #+#    #+#             */
/*   Updated: 2017/11/10 17:36:01 by tparand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	char		*p_dst;
	const char	*p_src;
	size_t		dst_len;
	size_t		dst_left;

	p_dst = dst;
	p_src = src;
	dst_left = dst_size;
	while (dst_left > 0 && *p_dst != '\0')
	{
		dst_left--;
		p_dst++;
	}
	dst_len = p_dst - dst;
	dst_left = dst_size - dst_len - 1;
	if (dst_left == 0)
		return (dst_len + ft_strlen(src));
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
	return (dst_len + (p_src - src));
}

int	main(void)
{
   char buf[10];

   bzero(buf, 10);
   strcpy(buf, "abc");
   ft_strlcat(buf, "abcdefghijklmnop", 10);
   printf("%s\n", buf);
 
   return 0;
}
