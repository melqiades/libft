/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <lpesan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/12/14 18:24:57 by lpesan           ###   ########.fr       */
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

// char	*ft_strdup(const char *s)
// {
// 	char	*ptr;
// 	int		i;

// 	i = 0;
// 	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
// 	if (ptr == NULL)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		ptr[i] = s[i];
// 		i++;
// 	}
// 	ptr[i] = 0;
// 	return (ptr);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*ret;
// 	int		len;
// 	int		i;

// 	len = ft_strlen(s1);
// 	ret = ft_strdup(s1);
// 	i = 0;
// 	while (set[i])
// 	{
// 		if (set[i] == *s1 || set[i] == s1[len - 1])
// 		{
// 			if (set[i] == *s1)
// 			{
// 				ret = 0;
// 				s1++;
// 				len--;
// 			}
// 			if (set[i] == s1[len - 1])
// 				ret[--len] = 0;
// 			i = 0;
// 		}
// 		else
// 			i++;
// 	}
// 	return (ret);
// }

int	ft_is_in_set(char t, char const *set)
{
	while (*set)
	{
		if (t == *set)
			return (1);
		else
			set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*ret;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	while (end > start && ft_is_in_set(s1[end - 1], set))
		end--;
	ret = malloc(sizeof(char) * (end - start + 1));
	if (ret == NULL)
		return (NULL);
	while (start < end)
		ret[i++] = s1[start++];
	ret[i] = 0;
	return (ret);
}

/*
#include<stdio.h>

int	main(void)
{
	char* s = "   xxx   xxx";
	char* set = " x";

	printf("%s", ft_strtrim(s ,set));
}*/