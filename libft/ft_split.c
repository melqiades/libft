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

#include "libft.h"

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
	return (ret);
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