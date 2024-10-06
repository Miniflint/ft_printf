/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:47:46 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/06 17:47:47 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned long int n, int maj, int fd)
{
	int	x;

	x = 0;
	if (n < 16)
	{
		if (n >= 10)
		{
			if (maj == 0)
				x += ft_putchar_fd((n - 10) + 'a', fd);
			else
				x += ft_putchar_fd((n - 10) + 'A', fd);
		}
		else
			x += ft_putchar_fd(n + 48, fd);
		return (x);
	}
	else
		x += ft_puthex_fd(n / 16, maj, fd);
	x += ft_puthex_fd(n % 16, maj, fd);
	return (x);
}
