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
     for(int i=0;i<n;i++)
     {
         if(data == a[i])
         {
             c=-1;
             k=i;
             break;
         }
     }
     if(c== -1)
     printf("%d found at location %d \n",data,k+1);

     else
     printf("%d not found \n",data);


    return 0;
}