/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 04:47:24 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/24 04:48:33 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(va_list	list)
{
	unsigned long int	number;
	int					len;
	char				*res0;

	number = (unsigned long int)va_arg(list, unsigned long int);
	len = 0;
	res0 = ft_itoahex(number, 0);
	len = write(1, "0x", 2);
	len += write(1, res0, ft_strlen(res0));
	free(res0);
	return (len);
}
