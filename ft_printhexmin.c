/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexmin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:44:50 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/22 21:45:58 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_printhexmin(int result)
{
	if (result == 10)
		return ('a');
	else if (result == 11)
		return ('b');
	else if (result == 12)
		return ('c');
	else if (result == 13)
		return ('d');
	else if (result == 14)
		return ('e');
	else if (result == 15)
		return ('f');
	else
		return (result + '0');
}
