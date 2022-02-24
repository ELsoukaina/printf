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

int	ft_printhex(const	char	*p, va_list	list)
{
	unsigned int	number;
	int				len;
	char			*str;
	char			*res0;
	char			*res1;

	number = va_arg(list, unsigned long);
	len = 0;
	str = (char *)p;
	res0 = ft_itoahex(number, 0);
	res1 = ft_itoahex(number, 1);
	if (*str == 'x')
		len = write(1, res0, ft_strlen(res0));
	else if (*str == 'X')
		len = write(1, res1, ft_strlen(res1));
	free(res0);
	free(res1);
	return (len);
}
