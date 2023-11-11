/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	int	slen;
	char	*res;

	i = 0;
	j = 0;
	slen = ft_strlen(s1) + ft_strlen(s2);
	res = malloc((slen + 1) * sizeof(char))

	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[i])
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = 0;
	return (res);
}

int	main (void)
{
	char	*s1 = "One";
	char	*s2 = "Two";

	printf("%s", ft_strjoin(s1, s2));
}