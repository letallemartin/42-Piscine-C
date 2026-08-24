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
#include <stdio.h>
int    ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
    unsigned int len;
    
    len = (unsigned int)ft_strlen(dest) + (unsigned int)ft_strlen(src);
	i = 0;
	j = 0;
    if (size <= ft_strlen(dest))
    {
        return (size + (unsigned int)ft_strlen(src));
    }
	while (dest[i] != '\0')
	{
        printf("%c", dest[i]);
        printf("i = %d\n", i);
        
		i++;
	}
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
        printf("%c", dest[i]);
        printf("i = %d\n", i);
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len);
}

int    ft_strlen(char *str)
{
    int    i;
    i = 0;  
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main(void)
{
	char str1[] = "world";
	char str2[20] = "hello";
	printf("%d\n",ft_strlcat(str2, str1, 3));
	return 0;
}