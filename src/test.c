#include <stdio.h>

// manipulate pointer and ptofpt
// change the value of i and j in void function

void ft_test(int* i, int* j)
{
    printf("In function\n");
    printf("%p\n", i);
    printf("%p\n", j);

    *i = 7;
}


int main(void)
{
    int i = 9;
    int *pt_i = &i;
    int **pt_pt_i = &pt_i;

    int j = 10;
    int *pt_j = &j;
    int **pt_pt_j = &pt_j;

    printf("In main\n");
    printf("%p\n", &i);
    printf("%p\n", &j);


    ft_test(pt_i , pt_j);


    printf("%d\n", i);
    return(0);
}
