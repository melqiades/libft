/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                   :+:      :+:    :+:   */
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

 int	ft_strncmpstr(const char *s1, const char *s2, size_t n)
 {
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if(s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
 }

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
	{
		j++;
	}
	if (size != 0)
	{
		while (src[i] != 0 && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (j);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  llen;
    char    ret[len];
    int     i;

    llen = ft_strlen(little);
    ft_strlcpy(ret,(char*)big, (len + 1) );
    i = 0;
    if (llen > len)
        return (NULL);
    if (llen == 0)
        return ((char*)big);
    while (ret[i])
    {
        if (!(ft_strncmpstr((ret + i), little, llen)))
            return ((char*)big + i);
        else
            i++;
    }
    return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";

    printf("%s", ft_strnstr(haystack, "aaabc", 5));

}*/