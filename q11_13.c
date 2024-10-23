#include<stdio.h>
int main()
{
    char num=65;
    int row;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(int i=65;i<=64+row;i++)
    {
        num=i;
        for(int j=65;j<=64+row;j++)
        {
            if(i==65 || j==65)
            {
            printf("%c ",num);
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