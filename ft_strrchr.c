/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tparand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:46:29 by tparand           #+#    #+#             */
/*   Updated: 2017/11/10 16:50:44 by tparand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p_s;
	char		*last_occ;

	p_s = (const char *)s;
	while (*p_s != '\0')
	{
		if (*p_s == c)
			last_occ = (char *)p_s;
		p_s++;
	}
	return (*p_s == '\0' ? NULL : last_occ);
}
