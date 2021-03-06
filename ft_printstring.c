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

int	ft_printstring(const	char	*p, va_list	list)
{
	char	*s;
	int		res;
	char	*str;

	res = 0;
	str = (char *)p;
	if (*str == 's')
	{
		s = va_arg(list, char *);
		if (s != NULL)
			res = write(1, s, ft_strlen(s));
		else
			res = write(1, "(null)", ft_strlen("(null)"));
	}
	else if (*str == 'c')
	{
		s = ft_chartostr(va_arg(list, int));
		res = write(1, s, 1);
		free(s);
	}
	else if (*str == '%')
		res = write(1, "%", 1);
	return (res);
}
