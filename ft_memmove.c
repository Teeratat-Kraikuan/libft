/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkraikua <tkraikua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:19:34 by tkraikua          #+#    #+#             */
/*   Updated: 2022/02/15 02:19:34 by tkraikua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	*dest;
	int	*source;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = (int *) dst;
	source = (int *) src;
	if ((source < dest) && (dest < (source + len)))
	{
		dest += len;
		source += len;
		while (len--)
			*--dest = *--source;
	}
	else
	{
		while (len--)
			*dest++ = *source++;
	}
	return (dst);
}
