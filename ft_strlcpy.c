/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:11:45 by hyko              #+#    #+#             */
/*   Updated: 2022/01/04 19:23:21 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
		dst[i] = '\0';
	while (src[src_len] != '\0')
		src_len++;
	return (src_len);
}
