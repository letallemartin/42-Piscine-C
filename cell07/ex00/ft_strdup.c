/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*strdup(const char *s)
{
	int		size;
	int		i;
	char	*s2;

	i = 0;
	size = 0;
	while (s[size] != '\0')
		size++;
	s2 = malloc((size + 1) * sizeof(char));
	while (i < size)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

// int main(void)
// {
// 	char *s = "moi";
// 	char *s3 = strdup(s);
// 	return 0;
// }