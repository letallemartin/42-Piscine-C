/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_sort_int_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void    ft_sort_int_tab(int *tab, int size)
{
    int    i;
    int    j;
    int    temp;
    i = 0;

    while (i < size )
    {
        j = i + 1;
        while (j < size )
        {
            if (tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

// int main(void)
// {
//     int cara[25] = {20,10,30,5,21};
//     ft_sort_int_tab(cara, 5);
//     int j = 0;
//     while (j < 5)
//     {
//         printf("%d\n", cara[j]);
//         j++;
//     }
//     return 0;
// }