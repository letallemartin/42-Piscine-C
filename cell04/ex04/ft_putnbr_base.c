/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int j;
	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if ((base[i] < '0' || base[i] > '9') && (base[i] < 'a' || base[i] > 'z') && (base[i] < 'A' || base[i] > 'Z'))
		{return (0);}
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
			{return (0);}
			j++;
		}
		i++;
	}
	if (i > 1){return (i);}
	else {return (0);}
}

void	print_base(int nbr, int T)
{
	char	a;
	long	n;

	a = ' ';
	n = nbr;
	while (n / T > 0)
	{
		a = n % T + '0';
		n = n / T;
		write(1,&a, 1);
	}

}

int	main(void)
{
	int x = 10;
	char str[] = "01";
	int T = check_base(str);
	print_base(x, T);
	return (0);
}