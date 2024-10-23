 #include<stdio.h>
int main()
{
     int row;
     printf("Enter no. of rows: ");
     scanf("%d",&row);
     for(int i=1;i<=row;i++ )
     {
        for(int j=row;j>=i;j--)
        {
          printf("*");
           
        }
        
        for(int sp=row;sp<=2*i-1;sp++)
        {
            printf(" ");
        }
         for(int j=row;j>=i+1;j--)
        {
         printf("*");
        }
       
        
        printf("\n");
     }
     return 0;
} 