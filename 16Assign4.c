#include<stdio.h>
int main()
{
    int a[4][4],i,j,sum=0;
    printf("Enter the elements of matrix");
    for(i=0;i<=3;i++)
       for(j=0;j<=3;j++)
           scanf("%d",&a[i][j]);
    /////////////////////////////////       
    for(i=0;i<=3;i++)
        sum+=a[i][i];
    printf("\nsum of leading diagonal of metrix is %d",sum);
    return 0;
}