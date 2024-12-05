#include <stdio.h>
void main()
{
    int a, b;
    printf("enter num A:-");
    scanf("%d", &a);
    printf("enter num B:-");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("after swapping the variables:\n");
    printf("the swap of variable A is:-%d\n", a);
    printf("the swap of variable B is:-%d\n", b);
}