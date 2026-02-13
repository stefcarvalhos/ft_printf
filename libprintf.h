/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stda-sil <stda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:57:33 by stda-sil          #+#    #+#             */
/*   Updated: 2024/11/19 20:44:01 by stda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_print_c(char c);
int	ft_print_s(char *s);
int	ft_print_di(int n);
int	ft_print_u(int n);
int	ft_print_Xx(int n, char *charset);
int	ft_print_p(void *p, char *charset);
#endif