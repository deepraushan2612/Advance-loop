#include<stdio.h>
int main()
{
    int row;
    printf("Enter no. of rows: ");
    scanf("%d",&row);

for(int i=row;i>=1;i--)
{
    for(int j=i;j>=1;j--)
    {
        printf("*");
    }
    printf("\n");
}
  for(int i=2;i<=row;i++)
  {
    for(int j=i;j>=1;j--)
    {
        printf("*");
    }
     printf("\n"); 
  }
return 0;
}