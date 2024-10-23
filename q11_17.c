#include<stdio.h>
int main()
{
    int i,sp,j;
    for( i=1;i<=3;i++);
    {
        for(sp=2; sp>=i ;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
            i--;
        }
        printf("\n");
    }

    
    return 0;
}