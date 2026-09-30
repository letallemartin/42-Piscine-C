#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0
#define EVEN(nbr) ((nbr) % 2 == 0)
#define EVEN_MSG "I have an even number of arguments"
#define ODD_MSG "I have an odd number of arguments"
#define SUCCESS 0
void	ft_putstr(char c);
t_bool	ft_is_even(int nbr);


#endif