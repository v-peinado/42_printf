/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpeinado <vpeinado@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:09:42 by vpeinado          #+#    #+#             */
/*   Updated: 2023/03/14 20:42:51 by vpeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_int(int num, int *len)
{
	long long	n;

	n = num;
	if (n == 0)
	{
		write(1, "0", 1);
		(*len)++;
	}
	if (n < 0)
	{
		ft_print_char('-', len);
		n = n *(-1);
	}
	if (n > 0)
	{
		if (n > 9)
			ft_print_int(n / 10, len);
		ft_print_char(n % 10 + '0', len);
	}
}
