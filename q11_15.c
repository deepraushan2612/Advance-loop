#include<stdio.h>
int main()
{
   
    int row;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    int num=1;
     char  a=97;
     char  b=66;
    for(int i = 1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
           
            if(num%2==0)
            {
                printf("%c",b);
                b=b+2;
                
            }
            else{
                printf("%c",a);
                 a=a+2;
            }
            num++;

        }
        printf("\n");
    }

}