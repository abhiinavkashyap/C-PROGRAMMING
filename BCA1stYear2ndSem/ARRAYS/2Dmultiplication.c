#include<stdio.h>
int main()
{
    //ASSIGNING ROW AND COLUMN OF ARRAY A
    printf("FOR ARRAY A:\n");
    int m,n;
    printf("Enter the no of rows\n");
    scanf("%d",&m);
    printf("Enter the no of columns\n");
    scanf("%d",&n);
    int a[m][n];
    //ASSIGNING ROW AND COLUMN OF ARRAY B
    printf("FOR ARRAY B:\n");
    int p,q;
    printf("Enter the no of rows\n");
    scanf("%d",&p);
    printf("Enter the no of columns\n");
    scanf("%d",&q);
    int b[p][q];
    if(n==p)//DATA VALIDATION
    {
        //Runtime of A
        printf("runtime initialisation of a:\n");
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);  
            }
        }
        //Runtime of B
        printf("runtime initialisation of b:\n");
        for(int i=0; i<p; i++)
        {
            for(int j=0; j<q; j++)
            {
                scanf("%d",&b[i][j]);  
            }
        }
        //WORING ON RESULTING ARRAY C WHICH STORES THE MULTIPLICATION OF A & B
        //n=p then multiplication of A & B is possible
        //Order of array C is m*q
        int c[m][q];
        printf("ARRAY C WHICH STORES THE MULTIPLICATION OF A & B:\n");
        for(int i=0; i<m; i++)//no. of rows = m
        {
        for(int j=0; j<q; j++)//no. of columns = q
        {
            c[i][j]=0;
            for(int k=0; k<m; k++)//no. of rows = m
            {
                c[i][j] = c[i][j] + (a[j][k] * b[k][j]);
            }
        }
        }
        //Printing process of array c inside of if block only
        for(int i=0; i<m; i++)
        {
        for(int j=0; j<q; j++)
        {
            printf("%d  ",c[i][j]);  
        }
        printf("\n");
        }
    }
    else
    printf("Sorry Multiplication Not possible !!!");
    
    return 0;
}