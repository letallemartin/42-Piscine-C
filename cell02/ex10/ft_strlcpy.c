/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i + 1 < size)
		{
			dest[i] = src[i];
		}
		i++;
	}
	if (size > 0)
	{
		if (i < size)
		{
			dest[i] = '\0';
		}
		else if (i >= size)
		{
			dest[size - 1] = '\0';
		}
	}
	return (i);
}

// int main(void)
// {
// 	char dest[20];
// 	char str[] = "moi";
// 	ft_strlcpy(dest, str, 80);
// 	return 0;
// }
