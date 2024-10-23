#include<stdio.h>
int main()
{
    int row;
    printf("Enter no. of rows: ");
    scanf("%d",&row);

for(int i=1;i<=row;i++)
{
    for(int sp=i;sp<=row-1;sp++)
    {
        printf(" ");
    }
    for(int j=1;j<=2*i-1;j++)
    {
        if(j==1||i==(row/2)+1 || i==i && j==2*i-1)
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