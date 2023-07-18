#include<stdio.h>
int main()
{
    int a[4][4],i,j,count=0;
    printf("Enter the elements of array:_");
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
             scanf("%d",&a[i][j]);
    //////////////////////////////
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
            if(a[i][j]!=0)
               count+=1;
    /////////////////////
    printf(count>(4*4)/2?"It is a dense matrix.":"it is sparse matrix");
    return 0;                    
}