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
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	swap(char **a,char **b)
{
	char	*temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	put_list(char **argv)
{
	int	i;
	i = 1;
	while (argv[i] != NULL)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 2);
		i++;
	}
}


int	main(int argc, char *argv[])
{
	int		i;
	bool	trie;

	i = 1;
	trie = false;
	while (trie == false)
	{
		trie = true;
		while (argv[i] != NULL)
		{
			if (argv[i + 1] != NULL && ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swap(&argv[i], &argv[i + 1]);
				trie = false;
			}
			i++;
		}
		if (trie == false)
			i = 1;
	}
	put_list(argv);
}
