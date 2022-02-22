/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 22:03:38 by sel-jala          #+#    #+#             */
/*   Updated: 2022/02/22 22:03:56 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "ft_printf.h"

int	 main(){
	float var = 10.8;
    float *ptvar = &var;
    // printf("printf %d | int %i | char (%c) | string %s | minhex %x | majhex %X | pointer %p \n\n",
    // -012, 8947, '\0', NULL, 0x13f, 0x145f, NULL);
    ft_printf("ft_printf %d | int %i | char (%c) | string %s | minhex %x | majhex %X | pointer %p\n\n",
    -012, 8947, '\0', NULL, 0x13f, 0x145f, NULL);
    

    //%s should print (null) in case if the convertion is null
    return (0);
}
