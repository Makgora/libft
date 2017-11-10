/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tparand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:45:33 by tparand           #+#    #+#             */
/*   Updated: 2017/11/10 16:50:21 by tparand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;

	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	while (*s != '\0')
		*new++ = f(*s++);
	return (new);
}
