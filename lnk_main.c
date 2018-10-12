#include <stdio.h>

int main(void)
{
    int a, b, s;
    printf("Enter 2 numbers:");
    scanf("%d %d", &a, &b);
    set(a);
    s = sum(b);
    printf("Sum: %d\n", s);

    //same as before, but using set() and  sum() linked from the
    // "cloned" object file
    printf("Enter 2 numbers (cloned_sum):");
    scanf("%d %d", &a, &b);
    cloned_set(a);
    s = cloned_sum(b);
    printf("Sum: %d\n", s);

    return 0;
}