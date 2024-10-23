#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter last number: ");
    scanf("%d",&num2);

    while(num1<=num2)
    {
    int num,rem,sum=0,temp,fact=1;
    num=num1;
    
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        while(rem>=1)
        {
            fact=fact*rem;
            rem--;
        }
        sum=sum + fact;
        fact=1;
        num=num/10;
    }
    if(temp==sum)
    {
         printf("%d is Strong number\n",temp);
    }
    num1++;
    }
    return 0;
}