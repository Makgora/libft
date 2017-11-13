/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tparand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:46:12 by tparand           #+#    #+#             */
/*   Updated: 2017/11/13 23:32:59 by tparand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char *p_s1;
	unsigned const char *p_s2;

	p_s1 = (unsigned const char *)s1;
	p_s2 = (unsigned const char *)s2;
	while (*p_s1 == *p_s2 && *p_s1 != '\0' && n > 0)
	{
		p_s1++;
		p_s2++;
		n--;
	}
	return (*p_s1 - *p_s2);
}
