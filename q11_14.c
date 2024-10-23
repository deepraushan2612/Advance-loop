#include<stdio.h>
int main()
{
    int num=1;
    int row;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        num=i;
        for(int j=1;j<=row;j++)
        {
            if(i==1 || j==1)
            {
            printf("%d ",num);
            num++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}