#include<stdio.h>
int main()
{
    int num,i=1,max=99999,min=-99999;
    float sum=0,avg;
    while(i<=10)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        sum=sum+num;

        if(num>min)
        {
            min=num;
        }
        if(num<max)
        {
            max=num;
        }

        i++;
    }
    avg=sum/10;
    printf("Average = %f\n",avg);
    printf("Max is %d\n",min);
    printf("Min is %d\n",max);
    return 0;
}