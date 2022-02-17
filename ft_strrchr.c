/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkraikua <tkraikua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:28:15 by tkraikua          #+#    #+#             */
/*   Updated: 2022/02/15 21:28:15 by tkraikua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	size_t			n;
	unsigned char	*last;

	i = 0;
	n = ft_strlen(s) + 1;
	last = NULL;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			last = (unsigned char *)(s + i);
		i++;
	}
	return ((char *)last);
}
