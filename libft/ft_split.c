/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:56:13 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 02:23:04 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char *s, char c, int bool)
{
	char	*str;
	int		arrlen;
	int		wordlen;

	str = s;
	arrlen = 1;
	wordlen = 1;
	while (*s != '\0')
		if (*s++ == c)
			arrlen++;
	while (*str != 0 && *str != c)
	{
		wordlen++;
		str++;
	}
	if (bool == 1)
		return (arrlen);
	return (wordlen);
}

static char	*create_word(const char *str, char c, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * ft_len(str, c, 0));
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		index;
	int		start;
	int		end;

	if (!s)
		return (0);
	arr = malloc(sizeof(char *) * ft_len(s, c, 1));
	if (!arr)
		return (0);
	index = 0;
	start = -1;
	end = -1;
	while (++end <= ft_strlen(s))
	{
		if (s[end] != c && start < 0)
			start = end;
		else if ((s[end] == c || end == ft_strlen(s)) && start >= 0)
		{
			arr[index++] = create_word(s, c, start, end);
			start = -1;
		}
	}
	arr[index] = 0;
	return (arr);
}
