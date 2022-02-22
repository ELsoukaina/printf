/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:34:58 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/22 19:32:02 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(char	*str, ...)
{
	va_list	list;
	int		len;

	va_start(list, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 's' || *str == 'c' || *str == '%')
				len += ft_printstring(str, list);
			else if (*str == 'i' || *str == 'd')
				len += ft_printnumber(list);
			else if (*str == 'u')
				len += ft_printunsnumber(list);
			else if (*str == 'x' || *str == 'X' || *str == 'p')
				len += ft_printphex(str, list);
		}
		else
			len += write(1, str, 1);
		str++;
	}
	va_end(list);
	return (len);
}
