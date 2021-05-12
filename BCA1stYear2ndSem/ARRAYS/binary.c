#include<stdio.h>
int main()
{
    int n,data,k,c=0;
    printf("Enter the no. elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the data to be searched\n");
    scanf("%d",&data);
    printf("runtime initialisation\n");
     for(int i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }

     int start=0, end=n-1, mid;
     while(start<=end)
     {
         mid=(start+end)/2;
         if(data==a[mid])
         {
             c=-1;
             k=mid;
             break;
         }
         else if (data>a[mid])
         start=mid+1;
         else
         end=mid-1;
     }
     
     if(c== -1)
     printf("%d found at location %d \n",data,k+1);

     else
     printf("%d not found \n",data);


    return 0;
}