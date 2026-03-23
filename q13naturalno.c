#include <stdio.h>
int main()
{

    int n, sum = 1;
    printf("enter a number :\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    printf("sum of first natural number =%d \n", sum);
    return 0;
}
