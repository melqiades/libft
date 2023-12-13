/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char	const *s, unsigned	int start, size_t	len)
{
	char	*prt;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(s);
	if (start > slen)
	{
		prt = malloc(sizeof(char));
		*prt = 0;
		return (prt);
	}
	if ((slen - start) < len)
		prt = malloc((slen - start + 1) * sizeof(char));
	else
		prt = malloc((len + 1) * sizeof(char));
	if (prt == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		prt[i] = s[start + i];
		i++;
	}
	prt[i] = 0;
	return (prt);
}

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	while (src[j])
// 	{
// 		j++;
// 	}
// 	if (size != 0)
// 	{
// 		while (src[i] != 0 && (i < size - 1))
// 		{
// 			dst[i] = src[i];
// 			i++;
// 		}
// 		dst[i] = 0;
// 	}
// 	return (j);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		len;
// 	char	**ret;
// 	int		i;
// 	int		j;
// 	int		last;

// 	len = ft_strlen(s);
// 	ret = malloc(len * sizeof(char *));
// 	if (ret == NULL)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	last = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 		{
// 			ret[j] = malloc((i - last + 1) * (sizeof(char)));
// 			if (ret[j] == NULL)
// 				return (NULL);
// 			ft_strlcpy(ret[j], (s + last), (i - last + 1));
// 			last = i + 1 ;
// 			j++;
// 		}
// 		i++;
// 	}
// 	ret[j] = 0;
// 	while (j < len)
// 	{
// 		ret[j] = 0;
// 		free(ret[j]);
// 		j++;
// 	}
// 	return (ret);
// }

int	ft_toklen(char const *s, char c)
{
	int	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			ret++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		len;
	int		i;

	i = 0;
	ret = malloc(sizeof(char *) * ((ft_toklen(s, c)) + 1));
	if (ret == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			(ret[i++]) = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	ret[i] = 0;
	return  (ret);
}
/*
#include <stdio.h>

int main(void)
{
	char *s = "HeXXXlOO";
	char c = 'X';
	char **ret;
	ret = ft_split(s, c);
	//printf ("%d",ret);

	printf("%s \n%s\n", ret[0], ret[1]);
}*/