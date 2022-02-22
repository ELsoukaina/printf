/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:39:10 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/17 23:39:14 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_strrev(char *str)
{
	unsigned int	strlen;
	size_t			i;
	char			tmp;

	if (!str)
		return (NULL);
	strlen = ft_strlen(str) - 1;
	i = 0;
	if (str[i] == '-')
		i++;
	while (i < strlen)
	{
		tmp = str[i];
		str[i] = str[strlen];
		str[strlen] = tmp;
		i++;
		strlen--;
	}
	return (str);
}
