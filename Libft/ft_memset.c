/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:10:09 by bkozluca          #+#    #+#             */
/*   Updated: 2022/01/31 19:04:14 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *dest, int c, unsigned n)
{
    unsigned char *ptr;
    
    ptr = dest;
    
    while (n-1 > 0)
    {
        *ptr++ = c;
    }
    
    return  (dest);
}
