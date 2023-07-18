#include<stdio.h>
int main()
{
    int a[2][4],b[4][2],i,j;
    printf("Enter the elements of first matrix:_\n");
    for(i=0;i<=1;i++)
        for(j=0;j<=3;j++)
            scanf("%d",&a[i][j]);
    //////////////////////////////
    for(i=0;i<=1;i++)
        for(j=0;j<=3;j++)
            b[j][i]=a[i][j];
    printf("\n");        
    ///////////////////////
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=1;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}             
