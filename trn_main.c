#include <stdio.h>

int main(void)
{
    int a, b, s;

    for(int i=0; i<2; i++)
    {
        printf("Enter 2 numbers:");
        scanf("%d %d", &a, &b);
        set(i, a);
        s = sum(i, b);
        printf("Sum: %d\n", s);
    }

    return 0;
}