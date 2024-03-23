#include <stdio.h>

// manipulate pointer and ptofpt
// change the value of i and j in void function

int main(int ac, char **av)
{
    printf("%p\n", av);
    printf("%p\n", av+1);
    av++;    
    printf("%p\n", av);    
    printf("%p\n", av+1);    
    return(0);
}
