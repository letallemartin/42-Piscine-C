/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0' )
	{
		return (haystack);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] != '\0')
			{
				if (to_find[j] ==  '\0')
				{
					return &str[i]
				}
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char str[] = "piscine";
	char search[] = "sc";
	ft_strstr(str, search);
	return 0;
}
