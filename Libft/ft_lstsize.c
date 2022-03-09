/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:44:52 by burakkozluc       #+#    #+#             */
/*   Updated: 2022/03/09 07:59:28 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *current;
    int     cont;

    current = lst;
    cont = 0;
    
    while (current != NULL)
    {
        current = current->next;
        cont++;
    }
    return (cont);
}