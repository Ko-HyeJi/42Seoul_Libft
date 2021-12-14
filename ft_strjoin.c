/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeji_ko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:23:50 by hyeji_ko          #+#    #+#             */
/*   Updated: 2021/12/14 19:41:34 by hyeji_ko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (size <= 0)
		return (len);
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * (size - 1);
	return (len);
}

void	join_str(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
		{
			str[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		while (sep[j] != 0 && i < size - 1)
		{
			str[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;

	len = total_len(size, strs, sep);
	str = (char *)malloc(sizeof(char) * (len + 1));
	join_str(size, strs, sep, str);
	return (str);
}
