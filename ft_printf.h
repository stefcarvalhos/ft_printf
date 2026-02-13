/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stda-sil <stda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:57:33 by stda-sil          #+#    #+#             */
/*   Updated: 2024/11/22 19:01:12 by stda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_print_c(char c);
int	ft_print_s(char *s);
int	ft_print_di(int n);
int	ft_print_u(unsigned int n);
int	ft_print_x(unsigned long n, char *charset);
int	ft_print_p(void *p, char *charset);
int	ft_printf(const char *format, ...);
#endif