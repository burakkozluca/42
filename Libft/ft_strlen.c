/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:54:31 by bkozluca          #+#    #+#             */
/*   Updated: 2022/01/31 18:30:43 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int ft_strlen(const char *str)
{   
    int a;
    a = 0;
    while (str[a] != NULL)
    {
        a++;
    }
    return (a);
}