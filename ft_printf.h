/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:37:34 by rbutzke           #+#    #+#             */
/*   Updated: 2023/11/19 12:37:58 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef H_BASE_UP
#  define H_BASE_UP "0123456789ABCDEF"
# endif

# ifndef H_BASE_LW
#  define H_BASE_LW "0123456789abcdef"
# endif

# ifndef DEC_BASE
#  define DEC_BASE "0123456789"
# endif

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_strlen(char *s);
int	ft_putstr(char *s);
int	ft_putnbr_base(long int n, char *base);
int	ft_putpointer(unsigned long long n, char *base);

#endif