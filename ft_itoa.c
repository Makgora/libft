/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tparand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:41:48 by tparand           #+#    #+#             */
/*   Updated: 2017/11/14 17:18:55 by tparand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_length(long int nb)
{
	size_t	size;

	size = 0;
	while (nb > 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char		*str;
	size_t		str_len;
	long int	nb;

	nb = (long int)n;
	str_len = get_length(nb);
	if (nb < 0)
	{
		nb *= -1;
		str = ft_strnew(str_len + 1);
		*str = '-';
	}
	else
		str = ft_strnew(str_len);
	if (nb == 0)
		*str = '0';
	while (nb > 0)
	{
		str[str_len - 1] = nb % 10 + '0';
		nb /= 10;
		str_len--;
	}
	return (str);
}

int main(int argc, const char *argv[])
{
	if (argc == 2)
		printf("|%d| -- |%s|\n", ft_atoi(argv[1]), ft_itoa(ft_atoi(argv[1])));
	char *str = "-623 ; 0 ; -0 ; NULL ; 2147483647 ; 2143647648 ; -2147483647";
	return (0);
}
