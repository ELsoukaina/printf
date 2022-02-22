/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoaHex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:37:02 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/22 21:43:33 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoahex(long nbr, int mode)
{
	char	*result;
	char	*tmp;
	char	*tmpchar;

	result = NULL;
	if (nbr == 0)
		return (ft_strdup("0"));
	while (nbr > 0)
	{
		tmp = result;
		if (mode == 1)
			tmpchar = ft_chartostr(ft_printhexmaj(nbr % 16));
		else if (mode == 0)
			tmpchar = ft_chartostr(ft_printhexmin(nbr % 16));
		nbr /= 16;
		result = (tmp) ? ft_strjoin(tmp, tmpchar) : ft_strdup(tmpchar);
		free(tmpchar);
		free(tmp);
	}
	return (ft_strrev(result));
}
