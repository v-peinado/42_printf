/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpeinado <vpeinado@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:06:55 by vpeinado          #+#    #+#             */
/*   Updated: 2023/03/14 20:42:20 by vpeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uint(unsigned int n, int *len)
{
	if (n > 9)
		ft_print_uint(n / 10, len);
	ft_print_char(n % 10 + '0', len);
}
