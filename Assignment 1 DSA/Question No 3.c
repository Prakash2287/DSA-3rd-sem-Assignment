#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// Question NO 2;

int main(void) 
{
    int a,b;
    printf("Enter the row and column count of the 2D matrix\n");
    scanf("%d %d",&a,&b);
    printf("%d %d\n",a,b);
    int arr[a][b];
    printf("Enter the matrix-\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    long long int fsize=a*b;
    int k=0;
    int arr2[fsize];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            arr2[k]=arr[i][j];
            k++;
        }
    }
    printf("The final array is-\n");
    
    for(int i=0;i<fsize;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    return 0;
}

