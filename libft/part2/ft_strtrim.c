/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                   :+:      :+:    :+:       */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char    *ft_strdup(const char *s)
{
    char *ptr;
    int    i;

    i = 0;
    ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
    if(ptr == NULL)
      return (NULL);
    while (s[i])
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = 0;
    return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		len;

	len = ft_strlen(s1);
	ret = ft_strdup(s1);
	while (*set)
	{
		if (*set == *s1)
		{
			ret = ret + 1;	
		}
		if (*set  == s1[len - 1])
		{
			ret[len - 1] = 0;
		}
		set++;
	}
	return (ret);
}
/*
#include<stdio.h>

int	main(void)
{
	char* s = "Hello";
	char* set = "o H";

	printf("%s", ft_strtrim(s, set));
}*/