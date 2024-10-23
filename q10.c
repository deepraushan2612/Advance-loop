#include<stdio.h>
int main()
{
    int value;
    printf("Enter a number: ");
    scanf("%d",&value);
    while(value>0)
    {
     int num,i=1,count=0;
     num=value;
    while(i<=num)
    {
        if(num%i==0)
        {
            count=count+1;
            i++;
        }
        else{
            i++;
        }
       
    }
    if(count==2)
    {
        printf("%d is Prime number\n",value);
    }
    else
    {
        printf("%d is not a prime number\n",value);

    }
    int a=0,b=1,c,m=0;
    while(a<=value)
    {
       
        if(a==value)
        {
            printf("%d is Fibonacci number\n",value);
            break;
        }
        else
        { 
             c=a+b;
             a=b;
             b=c;
        }
        if(a>value)
        {
            printf("%d is not a fibonacci number\n",value);
            break;
        }
    }
  
    printf("Enter number again: ");
    scanf("%d",&value);

    }

    printf("Loop finished because you entered negative number or zero.");
    return 0;
}