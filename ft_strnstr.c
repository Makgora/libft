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
	size_t		len_b;

	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0')
	{
		p_big = big;
		p_little = little;
		len_b = len--;
		while (len_b > 0 && *p_big != '\0' && *p_little == *p_big)
		{
			p_little++;
			p_big++;
			len_b--;
		}
		if (*p_little == '\0')
			return ((char *)big);
		big++;
	}
	return (NULL);

}

int main(int argc, const char *argv[])
{
	(void)argc;
	(void)argv;

	char buf2[] = "ozarabozaraboze123";
	printf("|%s| - |ozaraboze123|\n", ft_strnstr(buf2, "ozaraboze", 15));
	return 0;
}

