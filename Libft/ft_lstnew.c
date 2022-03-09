/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:34:56 by burakkozluc       #+#    #+#             */
/*   Updated: 2022/03/09 07:59:30 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *list;
    list = (t_list *)malloc(sizeof(t_list));
    if(!list)
        return(NULL);
    list->content = content;
    list->next = NULL;
    return (list);
}