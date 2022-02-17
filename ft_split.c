/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkraikua <tkraikua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:45:30 by tkraikua          #+#    #+#             */
/*   Updated: 2022/02/15 23:45:30 by tkraikua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
			i++;
		cnt++;
	}
	return (cnt);
}

static char	*str_n_dup(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	**arr;

	size = count_word(s, c);
	arr = (char **) malloc(sizeof(char *) * (size + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < size)
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		arr[j] = str_n_dup(&s[i], c);
		j++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	arr[j] = 0;
	return (arr);
}
