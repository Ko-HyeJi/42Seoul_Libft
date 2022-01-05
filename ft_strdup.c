/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:11:18 by hyko              #+#    #+#             */
/*   Updated: 2022/01/03 19:13:21 by hyko             ###   ########.fr       */
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
