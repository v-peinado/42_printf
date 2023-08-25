/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpeinado <vpeinado@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:15:10 by vpeinado          #+#    #+#             */
/*   Updated: 2023/03/14 20:42:46 by vpeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int n, int *len, char ch)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (ch == 'X')
		hex = "0123456789ABCDEF";
	if (n >= 16)
		ft_print_hex(n / 16, len, ch);
	ft_print_char(hex[n % 16], len);
}
