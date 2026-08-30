/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	i;
	char	a;
	long	n; //long prend -2147483648 et 2147483648

	n = nb;
	a = ' ';
	i = 1;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	while (n / i >= 10)
	{
		i = i * 10;
	}
	while (i >= 1)
	{
		a = (n / i) + '0';
		n = n % i;
		i = i / 10;
		write(1, &a, 1);
	}
}

int	main(void)
{
	int a = 0;
	ft_putnbr(a);
	return 0;
}