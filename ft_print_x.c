/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_Xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stda-sil <stda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:03:19 by stda-sil          #+#    #+#             */
/*   Updated: 2024/11/22 18:57:57 by stda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned long n, char *charset)
{
	int	count;

	count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	if (n >= 16)
		count = count + ft_print_x(n / 16, charset);
	write(1, &charset[n % 16], 1);
	count = count + 1;
	return (count);
}
