#include <stdio.h>
void main()
{
    int num1, num2, num3;

    printf("enter the num1:-");
    scanf("%d", &num1);
    printf("enter the num2:-");
    scanf("%d", &num2);
    printf("enter the num3:-");
    scanf("%d", &num3);

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            printf("the num1 is min");
        }
        else
        {
            printf("the num3 is min");
        }
    }
    else
    {
        if (num2 < num3)
        {
            printf("the num2 is min");
        }
        else
        {
            printf("the num3 is min");
        }
    }
}