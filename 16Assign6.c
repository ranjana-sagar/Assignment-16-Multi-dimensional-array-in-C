#include<stdio.h>
int main()
{
    int a[4][4],i,j,sum=0;
    printf("Enter the elemments of matrix:_");
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
            scanf("%d",&a[i][j]);
    /////////////////////////////  
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            sum+=a[i][j];
        printf("\nsum of %dst row of matrix is %d",i+1,sum);  
        sum=0;  
    }//sum of rows of matrix//
    printf("\n\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            sum+=a[j][i];
        printf("\nsum of %dst column of matrix is %d",i+1,sum); 
        sum=0;   
    }
}