/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	j;
	size_t	slen;

	dlen = (ft_strlen(dst));
	slen = ft_strlen(src);
	j = 0;
	while (((dlen + j) < (size - 1)) && (src[j]) && size > 0)
	{
		dst[dlen + j] = src[j];
		j++;
	}
	dst[dlen + j] = 0;
	if (dlen > size)
		dlen = size;
	return (dlen + slen);
}
/*
#include <stdio.h>

int	main(void)
{
	char	p[] = "B";
	char	p2[] = "AAAAAAAAA";

	printf("return is %zu\n is sotred %s", ft_strlcat(p, p2, 0),p);
}*/