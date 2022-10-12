#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    char *s = "elle wolfgher 42";

    printf("Original:\nc = %c\ns = %s\np = %p\nd = %d\n", 'c', s, s, 21);
    printf("i = %i\nu = %u\nx = %x\nX = %X\n%%\n", 2, 24, 8, 21);
    ft_printf("Replica:\nc = %c\ns = %s\np = %p\nd = %d\n", 'c', s, s, 21);
    ft_printf("i = %i\nu = %u\nx = %x\nX = %X\n%%\n", 2, 24, 8, 21);
    
    return (0);
}