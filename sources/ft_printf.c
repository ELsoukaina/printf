/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:34:58 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/10 17:35:05 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "libft.h"

int ft_numberlen(long number, int base)
{
    int i = 1;
    if (number >= base || number <= -base)
    {
        number /= base;
        i++;
    }
    return (i);
}

void ft_printnumber(long number, int base, char *pattern)
{
    int i = 1;
    if (number > base)
        ft_printnumber(number / base, base, pattern);
    write(1, &pattern[number % base], 1);
}

int OctalToDecimal(int n)
{
    int p = 0, decimal = 0, r;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        decimal = decimal + r * pow(8, p);
        ++p;
    }
    return decimal;
}

int hexadecimalToDecimal(char *hexVal)
{
    int len = strlen(hexVal);
    int base = 1;
    int dec_val = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (hexVal[i] >= '0' && hexVal[i] <= '9')
        {
            dec_val += ((int)(hexVal[i]) - 48) * base;
            base = base * 16;
        }
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F')
        {
            dec_val += ((int)(hexVal[i]) - 55) * base;

            base = base * 16;
        }
    }
    return dec_val;
}

int ft_printf(char *str, ...)
{
    va_list list;
    int len = 0, base = 0, number = 0, neg = 0;
    double d = 0;
    long l;
    
    char *pattern;
    char *s;
    char c;
    unsigned int unsNumber = 0;
    va_start(list, str);

    while (*str)
    {
        if (*str == '%')
        {
            str++;
            if (*str == 's')
            {
                s = va_arg(list, char *);
                len += write(1, s, ft_strlen(s));
            }
            else if (*str == 'c')
            {
                c = (char)va_arg(list, int);
                len += write(1, &c, 1);
            }
            else if (*str == 'd')
            {
                d = (double)va_arg(list, int);
                if (d < 0)
                {
                    len += write(1, "-", 1);
                    d *= -1;
                }
                len += ft_numberlen(d, 10);
                ft_printnumber(d, 10, "0123456789");
                d = 0;
            }
            else if (*str == 'i')
            {
                number = va_arg(list, int);
                if (number < 0)
                {
                    len += write(1, "-", 1);
                    number *= -1;
                }
                len += ft_numberlen(number, 10);
                ft_printnumber(number, 10, "0123456789");
                number = 0;
            }
            else if (*str == 'u')
            {
                unsNumber = va_arg(list, unsigned int);
                len += ft_numberlen(unsNumber, 10);
                ft_printnumber(unsNumber, 10, "0123456789");
                unsNumber = 0;
            }
            else if (*str == 'x')
            {
                number = va_arg(list, int);
                if (number < 0)
                    len += write(1, "-", 1);
                len += ft_numberlen(number, 16);
                ft_printnumber(number, 16, "0123456789abcdef");
                number = 0;
            }
            else if (*str == 'X')
            {
                number = va_arg(list, int);
                if (number < 0)
                    len += write(1, '-', 1);
                len += ft_numberlen(number, 16);
                ft_printnumber(number, 16, "0123456789ABCDEF");
                number = 0;
            }
            else if (*str == 'p')
            {
                l = va_arg(list, long);
                
                if (number < 0)
                    len += write(1, '-', 1);
                len += ft_numberlen(number, 16);
                ft_printnumber(number, 16, "0123456789ABCDEF");
                number = 0;
            }
            else if (*str == '%')
            {
                len += write(1, "%", 1);
            }
        }
        else
            len += write(1, str, 1);
        str++;
    }

    return (len);
}