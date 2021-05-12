#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the no of rows\n");
    scanf("%d",&m);
    printf("Enter the no of columns\n");
    scanf("%d",&n);
    int a[m][n];
    //RUNTIME OF A
    printf("runtime initialisation of a:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);  
        }
    }
    //PRINTING OF ARRAY A
    printf("Array A is:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    //TRANSPOSE OF A
    //here order has been reversed n * m
    printf("Transpose of A is:\n");
    int b[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            b[i][j]=a[j][i];
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}