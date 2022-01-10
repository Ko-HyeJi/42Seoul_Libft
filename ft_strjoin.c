/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:11:33 by hyko              #+#    #+#             */
/*   Updated: 2022/01/09 18:10:07 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*new_str;
	size_t		i;
	size_t		j;

	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	i = -1;
	while (++i < ft_strlen(s1))
		new_str[i] = s1[i];
	j = 0;
	while (i < len)
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}
