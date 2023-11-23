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

#include<stdio.h>
#include<stdlib.h>

char *ft_itoa(int n)
{
    char    *res;
    char    pptr[11];
    int i;
    int k;

    res = malloc(11 * sizeof(char));
    if (!(res))
        return (NULL);
    i = 0;
    k = 0;
    if (n < 0)
    {
        res[k++] = '-';
        n = - n;
    }
    if (n < 10)
    {
        res[i] = n + 48;
        return (res);
    }
    while (n > 0)
    {
        pptr[i] = ((n % 10) + 48);
        n = n / 10;
        i++;
    }
    while (i > 0)
    {
        res[k++] = (pptr[i - 1]);
        i--;
    }
    res[k] = 0;
    return (res);
}