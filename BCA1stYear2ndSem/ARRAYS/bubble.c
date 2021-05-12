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
        for(int j=0;j<=(n-i-2);j++)
        {
            if(a[j]>a[j+1])
            {
                int x= a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
    printf("Following are the sorted data:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }


    return 0;
}