/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		full_size;
	char	*str2;

	i = 0;
	j = 0;
	full_size = calc_size(size, **strs, *sep);
	
	str2 = malloc(full_size * sizeof(char));
	i = 0;
	while (i < size)
	{
		while (strs[i][j] != '\n')
		{
			str2[i] = strs[i][j]
			j++;
		}
		i++;
	}
}

int	calc_size(int	size, char **strs, char *sep)
{
	int	i;
	int	full_size;

	i = 0;
	full_size = 0;
	if (size <= 0)
		return (str2);
	while (i < size)
	{
		full_size += ft_strlen(str[i])
		i++;
		if (i < size - 1)
			full_size += ft_strlen(sep)
	}
	full_size += 1;
	return (size);
}

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

int	main(void)
{
	**str = ["hello", "its", "me"]
	*sep = ", "
	*ft_strjoin(3, **strs, *sep)
	return (0);
}