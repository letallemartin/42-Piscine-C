/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || 'Z' < str[i]) && (str[i] < 'a' || str[i] > 'z') && (str[i] < 48 || str[i] > 57))
		{
			if (str[i++] >= 'a' && str[i++] <= 'z')
			{
				str[i++] -= 32;
			}
		}
		printf("%c", str[i]);
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "moi je suis+moi que toi5moi";
	ft_strcapitalize(str);
	return 0;
}

