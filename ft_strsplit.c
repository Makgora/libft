/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tparand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:46:35 by tparand           #+#    #+#             */
/*   Updated: 2017/11/13 23:31:50 by tparand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*get_next_word(const char *s, char c)
{
	while (*s != '\0' && *s == c)
		s++;
	return (s);
}

char		**ft_strsplit(char const *s, char c)
{
	int		nb_words;
	char	**words_arr;
	int		i;
	size_t	word_len;

	if (s == NULL)
		return (NULL);
	nb_words = ft_strwcount(s, c);
	printf("%d\n", nb_words);
	words_arr = (char **)malloc(sizeof(char **) * (nb_words + 1));
	if (!words_arr)
		return (NULL);
	i = 0;
	while (i < nb_words)
	{
		s = get_next_word(s, c);
		printf("next:%s\n", s);
		word_len = ft_strclen(s, c);
		printf("wl:%zu\n", word_len);
		words_arr[i] = ft_strndup(s, word_len);
		s += word_len;
		i++;
	}
	return (words_arr);
}

void	print(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		ft_putstr(tab[i]);
		i++;
	}
}
int	main(void)
{
	print(ft_strsplit("test de la fonction  i   a", ' '));
	printf("\n");
	return (0);
}
