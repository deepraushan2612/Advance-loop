#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,num2,num1;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter last number: ");
    scanf("%d",&num2);
    while(a<=num2)
    {
        if(a>=num1)
        {
        printf("%d ",a);
        }
        c=a+b;
        a=b;
        b=c;
       
    }
    return 0;
}