/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkraikua <tkraikua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:14:38 by tkraikua          #+#    #+#             */
/*   Updated: 2022/02/15 23:14:38 by tkraikua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_str(char c, char const *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

static size_t	get_first_pos(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (char_in_str(s1[i], set))
		i++;
	return (i);
}

static size_t	get_last_pos(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (char_in_str(s1[i], set))
		i--;
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	first;
	size_t	last;

	first = get_first_pos(s1, set);
	last = get_last_pos(s1, set);
	str = (char *) malloc(sizeof(char) * (last - first + 1));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1 + first, last - first);
	str[last - first] = '\0';
	return (str);
}
