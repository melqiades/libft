/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

void	ft_putnbr_ptr(int n, char *ptr, int i)
{
	char	prnt;

	if (n == -2147483648)
	{
		ptr = "-2147483648";
		return ;
	}
	if (n < 0)
	{
		ptr[i] = '-';
		i++;
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_ptr(n / 10, ptr, i++);
		ft_putnbr_ptr(n % 10, ptr, i++);
	}
	else
	{
		prnt = n + '0';
		ptr[i] = prnt;
		i++;
	}
	*((char *)ptr) = 0;
}

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (nitems == 0 || size == 0)
		return (NULL);
	if (nitems > (INT_MAX / size))
		return (NULL);
	ptr = malloc(nitems * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (nitems * size))
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


void	ft_strrev (char *str)
{
	int 	i;
	int 	len;
	char	temp;

	len = ft_strlen(str);
	i = 0;
	while(i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
}
int	ft_abs(int	n)
{
	if(n < 0)
		return (-n);
	else
		return (n);
}
char *ft_itoa(int n)
{
	char    *res;
	int i;
	int is_neg;

	res = ft_calloc(12, sizeof(char));
	if (!(res))
		return (NULL);
	i = 0;
    is_neg = 0;
	if(n == 0)
		res[i++] = '0';
    if (n < 0)
		is_neg = 1;
    while (n != 0)
    {
        res[i] = (ft_abs((n % 10)) + 48);
        n = n / 10;
        i++;
    }
	res[i] = is_neg * '-';
	ft_strrev(res);
    return (res);
}

int	main(void)
{
	char	*k;

	k = ft_itoa(42);
	printf("%s", k);
	free(k);
}