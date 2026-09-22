/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	calc_size(int size, char **strs, char *sep)
{
	int	i;
	int	full_size;

	i = 0;
	full_size = 0;
	if (size <= 0)
		return (size);
	while (i < size)
	{
		full_size += ft_strlen(strs[i]);
		i++;
		if (i < size - 1)
			full_size += ft_strlen(sep);
		
	}
	full_size += 1;
	return (full_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		full_size;
	char	*str2;
	int g = 0;
	i = 0;
	full_size = calc_size(size, strs, sep);
	
	str2 = malloc(full_size * sizeof(char));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str2[g] = strs[i][j];
			write(1,&strs[i][j],1);
			g++;
			j++;
		}
		i++;
	}
	str2[g] = '\0';
	int p = ft_strlen(str2);
	write(1,str2,full_size);
	return (str2);
}

int	main(void)
{
	char *strs[] = {"hel", "its"};
	char *sep = ", ";
	char *str2 = ft_strjoin(2, strs, sep);
	return (0);
}