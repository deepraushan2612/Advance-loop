#include<stdio.h>
// #include<math.h>
int main()
{
    int num,rem,power=0,sum=0,res;
    printf("Enter a binary number:  ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        res=rem*(2^power);
        sum=sum+res;
        power++;
        num=num/10;
    }
    printf("Decimal value = %d",sum);
    return 0;
}