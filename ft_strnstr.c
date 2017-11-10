/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tparand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:46:26 by tparand           #+#    #+#             */
/*   Updated: 2017/11/10 17:03:47 by tparand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		while (*p_little != '\0' && *p_little == *p_big && len_bis-- > 0)
		{
			p_little++;
			p_big++;
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
