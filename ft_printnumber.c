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

	number = (long)va_arg(list, int);
	return (write(1, ft_itoa(number), ft_strlen(ft_itoa(number))));
}
