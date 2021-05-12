#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the no of rows\n");
    scanf("%d",&m);
    printf("Enter the no of columns\n");
    scanf("%d",&n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    printf("runtime initialisation of a:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);  
        }
    }
    printf("runtime initialisation of b:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);  
        }
    }
//Addition of two arrays 
     for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
//Matrix C which contains the substraction of A & B
printf("Matrix C which contains the substraction of A & B :\n");
for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d  ",c[i][j]);  
        }
        printf("\n");
    }

 return 0;
}