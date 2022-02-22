/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:36:32 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/22 19:34:28 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

char	*ft_itoahex(long nbr, int mode);
char	*ft_strrev(char *str);
char	ft_printhexmaj(int result);
char	ft_printhexmin(int result);
char	*ft_chartostr(char c);
int		ft_printstring(char *str, va_list list);
int		ft_printnumber(va_list list);
int		ft_printunsnumber(va_list list);
int		ft_printphex(char *str, va_list list);
int		ft_printf(char *str, ...);
#endif
