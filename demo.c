#include<stdio.h>
int main()
{
    for(int i=3;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=2;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}