/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:09:45 by hyko              #+#    #+#             */
/*   Updated: 2022/01/12 12:09:14 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_len(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	long	nb;

	nb = n;
	i = 0;
	len = nb_len(nb);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
		i = 1;
	}
	while (i < len)
	{
		str[len - 1] = nb % 10 + 48;
		nb = nb / 10;
		len--;
	}
	return (str);
}
