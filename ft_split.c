/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:11:04 by hyko              #+#    #+#             */
/*   Updated: 2022/01/17 05:36:10 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_malloc_error(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	if (s[0] == '\0')
		return (0);
	i = 0;
	count = 0;
	if (s[0] != c)
		count++;
	while (s[i + 1] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
			i++;
	}
	return (count);
}

int	word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		total_word;
	int		next_word_len;
	int		i;
	int		j;

	total_word = word_count(s, c);
	str = (char **)malloc(sizeof(char *) * (total_word + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = -1;
	while (++j < total_word)
	{
		while (s[i] == c)
			i++;
		next_word_len = word_len(s, c, i);
		str[j] = (char *)malloc(sizeof(char) * (next_word_len + 1));
		if (str[j] == NULL)
			return (ft_malloc_error(str));
		ft_strlcpy(str[j], &s[i], next_word_len + 1);
		i += next_word_len;
	}
	str[j] = NULL;
	return (str);
}
