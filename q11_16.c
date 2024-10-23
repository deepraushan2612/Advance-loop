#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int sp=n-1;sp>=i;sp--)
        {
            printf(" ");
        }
        for(int j=i; j>=1;j--)
        {
            printf("%d",j);
        }
        for(int j=2;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    
    return 0;
}