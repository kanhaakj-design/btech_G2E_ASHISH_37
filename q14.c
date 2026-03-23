#include <stdio.h>
int main()
{
    int num, oddsum = 0, evensum = 0;
    printf("enter the number");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            evensum = evensum + i;
        }
        else
        {
            oddsum = oddsum + i;
        }
    }

    printf("sum of even number is : %d", evensum);
    printf("sum of odd number is : %d", oddsum);
    return 0;
}