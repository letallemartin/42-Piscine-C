/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

// int	main(void)
// {
// 	int min;
// 	int max;

// 	min = 2;
// 	max = 6;
// 	int *tab = ft_range(min, max);
// 	int i = 0;
// 	while (i < (max - min))
// 	{
// 		ft_putnbr(tab[i]);
// 		i++;
// 	}
// 	return 0;
// }