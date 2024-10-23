#include<stdio.h>
int main()
{   int num1,num2;
    printf("Entre 1st number: ");
    scanf("%d",&num1);
    printf("Entre last number: ");
    scanf("%d",&num2);
    while(num1<=num2)
    {
    int num=num1,i=1,count=0,temp;
    temp=num;
    while(i<=num)
    {
        if(num%i==0)
        {
            count=count+1;
            i++;
        }
        else
        {
             i++;
        }
    }
    if(count==2)
    {
        printf("%d is Prime number\n",temp);
    }
    num1++;
    }
    return 0;
}