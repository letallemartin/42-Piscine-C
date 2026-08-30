 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_atoi(char *str)
{
	int i;
	int signe ;
	int nbr;

	nbr = 0;
	signe = 1;
	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-')
	{
		signe = -signe;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	printf("%d\n", signe * nbr);
	return (signe * nbr);
}

// int main(void)
// {
// 	char a[] = "  -42fdss";
// 	ft_atoi(a);
// 	return 0;
// }