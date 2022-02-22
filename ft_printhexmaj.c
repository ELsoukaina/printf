/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:35:58 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/22 21:44:35 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_printhexmaj(int result)
{
	if (result == 10)
		return ('A');
	else if (result == 11)
		return ('B');
	else if (result == 12)
		return ('C');
	else if (result == 13)
		return ('D');
	else if (result == 14)
		return ('E');
	else if (result == 15)
		return ('F');
	else
		return (result + '0');
}
