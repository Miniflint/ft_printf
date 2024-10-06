/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:47:51 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/06 17:47:52 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(long long int n, int fd)
{
	int	x;

	x = 0;
	if (n < 0)
	{
		x += ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n < 10)
	{
		x += ft_putchar_fd(n + 48, fd);
		return (x);
	}
	else
		x += ft_putnbr_fd(n / 10, fd);
	x += ft_putnbr_fd(n % 10, fd);
	return (x);
}
