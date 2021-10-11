#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_reverse_alphabet(void)
{
    char a='z';
    
    for(a='z'; a>='a'; a--){
        ft_putchar(a);
    }
}

int		main(void)
{
    
    ft_print_reverse_alphabet();
}
