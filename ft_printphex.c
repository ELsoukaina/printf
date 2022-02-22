/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printPHex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:35:02 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/22 21:54:22 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printphex(char	*str, va_list	list)
{
	unsigned int	number;
	int				len;

	number = va_arg(list, unsigned long);
	len = 0;
	if (*str == 'x')
		len = write(1, ft_itoahex(number, 0),
				ft_strlen(ft_itoahex(number, 0)));
	else if (*str == 'X')
		len = write(1, ft_itoahex(number, 1),
				ft_strlen(ft_itoahex(number, 1)));
	else if (*str == 'p')
	{
		len = write(1, "0x", 2);
		len += write(1, ft_itoahex(number, 0),
				ft_strlen(ft_itoahex(number, 0)));
	}
	return (len);
}
