#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 1st number: ");
    scanf("%d",&num2);
    while(num1<=num2){
    int num,rev=0,rem,temp;
    num=num1;
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(temp==rev)
    {
        printf("Palindrome = %d\n",temp);
    }

    num1++;
    }
    return 0;
}