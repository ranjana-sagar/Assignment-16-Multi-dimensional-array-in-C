#include<stdio.h>
int main()
{
    int a[4][4],i,j,count=0,x=0,max=0;
    printf("Enter the elements of array:_");
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
             scanf("%d",&a[i][j]);
    //////////////////////////////
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            if(a[i][j]==1)
               count+=1;
        //////
        if(count>max)
        {
            max=count;
            count=0;
            x=i;
        }       
    }
    printf("\nmaximum number of 1 are in row no %d",x+1);
    return 0;
}