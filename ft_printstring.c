/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printString.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:35:25 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/22 21:56:48 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstring(char	*str, va_list	list)
{
	char	*s;
	int		res;

	res = 0;
	if (*str == 's')
	{
		s = va_arg(list, char *);
		if (s != NULL)
			res = write(1, s, ft_strlen(s));
		write(1, "(null)", ft_strlen("(null)"));
	}
	else if (*str == 'c')
	{
		s = ft_chartostr(va_arg(list, int));
		res = write(1, s, 1);
	}
	else if (*str == '%')
		res = write(1, "%", 1);
	return (res);
}
