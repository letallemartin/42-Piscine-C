/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

void swap(char *a,char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	bool	trie;

	i = 0;
	j = 0;
	trie = true;
	while (argv[j] != NULL)
	{
		j++;
		if (ft_strcmp(argv[i], argv[i + 1]) < 0)
			trie = false;
		while (trie == false)
		{
			if (argv[i + 1] != NULL && ft_strcmp(argv[i], argv[i + 1]) < 0)
				swap(argv[i], argv[i + 1]);
			i++;
		}
	}
}
