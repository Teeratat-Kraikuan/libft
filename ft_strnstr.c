/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkraikua <tkraikua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:46:47 by tkraikua          #+#    #+#             */
/*   Updated: 2022/02/15 21:46:47 by tkraikua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *) haystack);
	if (haystack[0] == '\0' || len == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (1)
	{
		if (needle[j] == '\0')
			return ((char *)(haystack + i - j));
		if (haystack[i] == needle[j])
			j++;
		else
		{
			i -= j;
			j = 0;
		}
		if (i >= len && haystack[i] != '\0')
			return (NULL);
		i++;
	}
}
