/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:11:04 by hyko              #+#    #+#             */
/*   Updated: 2022/01/15 22:04:53 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/*
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
*/
int	word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		word_num;
	int		i;
	int		j;
	int		k;

	word_num = word_count(s, c);
	//printf("word_num : %d\n", word_num);
	str = (char **)malloc(sizeof(char *) * (word_num));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < word_num)
	{
		while (s[i] == c)
			i++;
		k = 0;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			k++;
		}
		if (k == 0)
			break ;
		str[j] = (char *)malloc(sizeof(char) * (k + 1));
		if (str[j] == NULL)
			return (NULL);
			//return (ft_malloc_error(str));
		i = i - k;
		k = 0;
		while (s[i] != c && s[i] != '\0')
		{	
			str[j][k] = s[i];
			k++;
			i++;
		}
		str[j][k] = '\0';
		//printf("%s\n", str[j]);
		j++;
		i++;
	}
	return (str);
}
