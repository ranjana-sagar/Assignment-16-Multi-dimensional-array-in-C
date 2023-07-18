#include<stdio.h>
int main()
{
    int a[4][4],i,j;
    printf("Enter the elements of an array:\n");
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
            scanf("%d",&a[i][j]);
    printf("\n");        
    //////////////////////////////
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            if(j<=i)
               printf("%d ",a[i][j]);
            else
               printf("%d ",0);         
        printf("\n");       
    }
    return 0;                   
}