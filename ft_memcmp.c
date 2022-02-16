/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkraikua <tkraikua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:41:31 by tkraikua          #+#    #+#             */
/*   Updated: 2022/02/15 21:41:31 by tkraikua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (((int *)s1)[i] != '\0' || ((int *)s2)[i] != '\0'))
	{
		if (((int *)s1)[i] < ((int *)s2)[i])
			return (-1);
		else if (((int *)s1)[i] > ((int *)s2)[i])
			return (1);
		i++;
	}
	return (0);
}
