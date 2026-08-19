/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  rush00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 
void    ft_putchar(char c);

void    ft_putelem(int x, int y, int i, int j);

void    rush(int x, int y)
{
    int     i; 
    int     j;
    i = 0; // 0 -> y 

    if (x > 0 && y > 0)  
    {
        while (i < y) 
        {
            j = 0;
            while (j < x) 
            {
                ft_putelem(x, y, i, j);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
}

void    ft_putelem(int x, int y, int i, int j)
{
    if (i == 0 && j == 0|| j == 0 && i == y - 1 || j == x - 1 && i == 0 || j == x - 1 && i == y - 1)
    {
        ft_putchar('0'); 
    }
    else if ((i == 0  || i == y - 1) && 0 < j < x - 1 )
    {
        ft_putchar('-');
    }
    else if ((j == 0  || j == x - 1) && 0 < i < y - 1 )
    {
        ft_putchar('|'); 
    }
    else
    {
        ft_putchar(' ');
    }
}