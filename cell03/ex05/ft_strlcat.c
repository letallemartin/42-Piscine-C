/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letalle <letalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:00:00 by letalle           #+#    #+#             */
/*   Updated: 2026/08/19 15:00:00 by letalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	j = 0;
	len = (unsigned int)ft_strlen(dest) + (unsigned int)ft_strlen(src);
	if (size <= (unsigned int)ft_strlen(dest))
	{
		return (size + (unsigned int)ft_strlen(src));
	}
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0 && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len);
}

// int    ft_strlen(char *str)
// {
//     int    i;
//     i = 0;  
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     return i;
// }

// int main(void)
// {
// 	char str1[] = "world";
// 	char str2[20] = "hello";
// 	printf("%d\n",ft_strlcat(str2, str1, 8));
// 	return 0;
// }