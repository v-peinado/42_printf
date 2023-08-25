/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpeinado <vpeinado@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:27:44 by vpeinado          #+#    #+#             */
/*   Updated: 2023/03/14 20:19:04 by vpeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_print_char(char ch, int *len);
void	ft_print_int(int n, int *len);
void	ft_print_str(char *str, int *len);
void	ft_print_uint(unsigned int n, int *len);
void	ft_print_ptr(void *ptr, int *len);
void	ft_print_hex(unsigned int n, int *len, char ch);

#endif
