#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Eneter last number: ");
    scanf("%d",&num2);
    while(num1<=num2)
    {
    int num,count=0,temp,rem,i=1,res=1,sum=0,renum;
    num=num1;
    renum=num;
    temp=num;
    while(num!=0)
    {
        count=count + 1;
        num=num/10;
    }
    while(temp!=0){
    rem = temp % 10;
    while(i<=count)
    {
        res=res*rem;
        i++;
    }
    sum=sum+res;
    res=1;
    i=1;
    temp=temp/10;
    }
    if(sum==renum)
    {
        printf("Armstrong number = %d\n",renum);
    }
    num1++;
    }
    return 0;
}