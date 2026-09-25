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
	if (size == 0)
		return (1);
	while (i < size)
	{
		full_size += ft_strlen(strs[i]);
		if (i < size - 1)
			full_size += ft_strlen(sep);
		i++;
	}
	full_size += 1;
	return (full_size);
}

int	copie_char(int g, char *obs, char *dest)
{
	int	i;

	i = 0;
	while (obs[i] != '\0')
	{
		dest[g] = obs[i];
		g++;
		i++;
	}
	return (g);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str2;
	int		g;

	g = 0;
	i = 0;
	str2 = malloc(calc_size(size, strs, sep) * sizeof(char));
	while (i < size)
	{
		g = copie_char(g, strs[i], str2);
		i++;
		if (i < size)
		{	
			g = copie_char(g, sep, str2);
		}
	}
	str2[g] = '\0';
	write(1,str2,calc_size(size, strs, sep));
	return (str2);
}

int	main(void)
{
	char *strs[] = {"hey", "its", "me"};
	char *sep = ", ";
	char *str2 = ft_strjoin(3, strs, sep);
	free(str2);
	return (0);
}