#include<stdio.h>
int main(){
    int num,rem,sum =0;
    
    printf("enter the number :");
    scanf("%d",&num);
    int x=num;

    for(; x>0; x=x%10 )
    {
        rem=x%10;
        sum = sum *10 + rem;
    }

    printf("reverse of digits of %d is %d", num, sum);
    return 0;

}