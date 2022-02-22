/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printUnsNumber.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:34:47 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/22 22:01:39 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsnumber(va_list	list)
{
	unsigned int	unsnumber;
	char			*ch;

	unsnumber = va_arg(list, unsigned int);
	ch = ft_itoa(unsnumber);
	return (write(1, ch, ft_strlen(ch)));
}
