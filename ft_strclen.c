/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tparand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:44:19 by tparand           #+#    #+#             */
/*   Updated: 2017/11/10 16:49:57 by tparand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strclen(const char *s, char c)
{
	size_t	s_len;

	s_len = 0;
	while (s[s_len] != c && s[s_len] != '\0')
		s_len++;
	if (c == '\0' && s[s_len] == '\0')
		return (s_len);
	return (s[s_len] != '\0' && s[s_len] == c ? 0 : s_len);
}
