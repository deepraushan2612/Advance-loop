#include<stdio.h>
int main()
{
    int num,rem,last,first,count=0,res=1,temp;
    printf("Enter yourm number: ");
    scanf("%d",&num);
    temp = num;
    last=num%10;
    while (num!=0)
    {
        count = count+1;
        num=num/10;
    }
    while (count>=2)
    {
        res=res*10;
        count--;
    }
    first=temp/res;
    printf("First digit is %d\nLast digit is %d",first,last);

    return 0;
    
}