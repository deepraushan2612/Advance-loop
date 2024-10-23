#include<stdio.h>
int main()
{
    int num,count=0,temp,rem,i=1,res=1,sum=0,renum;
    printf("Enter a number: ");
    scanf("%d",&num);
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
        printf("Armstrong number");
    }
    else{
        printf("not ");
    }
    return 0;
}