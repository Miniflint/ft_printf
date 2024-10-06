/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:47:33 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/06 17:47:34 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *sentence, ...);
int		ft_putdsc(char after_p, void *parsed_arg, int x);
int		ft_isinset(char c);
int		ft_puthex_fd(unsigned long int n, int maj, int fd);
int		ft_resultset(char *set, char c);
int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(long long int n, int fd);
int		ft_putstr_fd(char *s, int fd);

#endif
