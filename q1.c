#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("enter last number: ");
    scanf("%d",&num2);
    while(num1<=num2)
    {
        if(num1%2==0)
        {
            printf("%d.Coding  ",num1);
            num1++;
        }
        else
        {
            printf("%d.Age  ",num1);
            num1++;
        }
    }
    return 0;
}