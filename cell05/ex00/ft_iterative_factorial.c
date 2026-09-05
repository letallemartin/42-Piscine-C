/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb >= 0 && nb <= 9)
	{
		while (nb > 1)
		{
			res = res * nb;
			nb -= 1;
		}
		return (res);
	}
	else
	{
		return (0);
	}
}

// int main(void)
// {
// 	int nb = 5;
// 	ft_iterative_factorial(nb);
// 	return 0;
// }