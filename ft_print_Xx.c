/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_Xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stda-sil <stda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:03:19 by stda-sil          #+#    #+#             */
/*   Updated: 2024/11/19 19:34:03 by stda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>

int	ft_print_Xx(int n, char *charset)
{
	long	nbr;
	int	count;
		
	nbr = n;
	count = 0;
	if (nbr == 0)
		return (write(1, "0", 1));
	if (nbr < 0)
	{
		ft_print_c('-');
		nbr = -nbr;
		count = 1;
	}
	if (nbr >= 16)
		count = count + ft_print_Xx(nbr / 16, charset);
	write(1, &charset[nbr % 16], 1);
	count = count + 1;
	return (count);	
}

/*int main()
{
	printf("%X\n", ft_print_Xx (-255, "0123456789ABCDEF"));
}*/
