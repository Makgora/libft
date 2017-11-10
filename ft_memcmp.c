/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tparand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:42:38 by tparand           #+#    #+#             */
/*   Updated: 2017/11/10 17:10:32 by tparand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*p_s1;
	const char	*p_s2;

	p_s1 = (const char *)s1;
	p_s2 = (const char *)s2;
	while (*p_s1 == *p_s2 && n > 0)
	{
		p_s1++;
		p_s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else if (*p_s1 < *p_s2)
		return (-1);
	else
		return (1);
}
