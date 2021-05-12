#include<stdio.h>
int main()
{
    int n=5;
    int A[]={1,2,3,4,5};
    int B[5];

    for(int i=0; i<n; i++)
    {
        B[i]=A[(i+3)%5];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d \n",B[i]);
    }
    return 0;

}