/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0 && nb == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		res = res * nb;
		power -= 1;
	}
	return (res);
}

// int main(void)
// {
// 	printf("%d\n", ft_iterative_power(4, 3));
// 	return 0;
// }