#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. elements\n");
    scanf("%d",&n);
    int a[n];
    printf("runtime initialisation\n");
     for(int i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }

    
    for(int i=0; i<=(n-2);i++)
    {
        int loc=i;
        for(int k=i+1;k<=(n-1);k++)
        {
            if(a[loc]>a[k])
            loc=k;
        }
        int x= a[i];
        a[i]=a[loc];
        a[loc]=x;
    }
    printf("Following are the sorted data:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }


    return 0;
}