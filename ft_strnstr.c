/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tparand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:46:26 by tparand           #+#    #+#             */
/*   Updated: 2017/11/21 19:13:16 by tparand          ###   ########.fr       */
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
		while (len_bis > 0 && *p_little != '\0' && *p_little == *p_big)
		{
			p_little++;
			p_big++;
			len_bis--;
		}
		printf("p_big: %s, p_little: %s, len: %zu\n", p_big, p_little, len_bis);
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
/*
**int main(int argc, const char *argv[])
**{
**	(void)argc;
**	(void)argv;
**
**	char buf2[] = "ozarabozaraboze123";
**	printf("|%s| - |ozaraboze123|\n", ft_strnstr(buf2, "ozaraboze", 15));
**	return 0;
**}
*/
