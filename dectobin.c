#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%2;
        rev=rev*10+rem;
        num=num/2;
    }
    printf("Binary = %d",rev);
    return 0;
}