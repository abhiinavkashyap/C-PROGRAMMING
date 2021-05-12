#include<stdio.h>
int main()
{
    int n=5,temp,pos;
    int A[]={1,2,3,4,5};
    for(int i=0; i<n/2; i++)
    {
        pos=4-i;
        temp=A[i];
        A[i]=A[pos];
        A[pos]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d \n",A[i]);
    }
   
    
}