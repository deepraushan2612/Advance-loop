#include<stdio.h>
int main()
{

    int row;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=row;j++)
        {
            if(i==row || j==row || (i+j)==row + 1)
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}