#include <stdio.h>
void main()
{
    int i, count = 0, num;

    printf("enter the value:-");
    scanf("%d", &num);

    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("the number of count is:-%d", count);
}