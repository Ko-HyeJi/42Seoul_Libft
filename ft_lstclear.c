/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:18:36 by hyko              #+#    #+#             */
/*   Updated: 2022/01/12 19:07:30 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (del)(void*))
{
	t_list	*curr;

	while (*lst != NULL)
	{
		curr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = curr;
	}
}
