/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeji_ko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:02:47 by hyeji_ko          #+#    #+#             */
/*   Updated: 2021/12/14 19:04:01 by hyeji_ko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*cp_src;

	len = ft_strlen(src);
	cp_src = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (src[i] != '\0')
	{
		cp_src[i] = src[i];
		i++;
	}
	cp_src[i] = '\0';
	return (cp_src);
}
