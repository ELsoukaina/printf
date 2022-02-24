/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printNumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:34:30 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/22 21:47:27 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnumber(va_list list)
{
	long	number;
	int		len;
	char	*res;

	number = (long)va_arg(list, int);
	res = ft_itoa(number);
	len = write(1, res, ft_strlen(res));
	free(res);
	return (len);
}
