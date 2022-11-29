/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlstbigger.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:26:32 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/29 16:34:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_nlstbigger(t_nlist	*l, int n)
{
	size_t	i;

	i = 0;
	while (l)
	{
		if (l->num > n)
			i++;
		l = l->next;
	}
	return (i);
}

int	ft_nlstsmaller(t_nlist	*l, int n)
{
	size_t	i;

	i = 0;
	while (l)
	{
		if (l->num > n)
			i++;
		l = l->next;
	}
	return (i);
}
