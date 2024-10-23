#include<stdio.h>
int main()
{
    int num,max=99999,min=-99999,rem;
     printf("Enter a number: ");
     scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        if(rem>min)
        {
            min=rem;
        }
        if(rem<max)
        {
            max=rem;
        }

       num=num/10;
    }

    printf("Max digit is %d\n",min);
    printf("Min digit is %d\n",max);
    return 0;
}