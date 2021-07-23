#include <stdio.h>
int main()
{
    int arr[] = {10, 20,30};
    int *ptr;
    int i;
    ptr = arr;
    for(i=0;ptr<=&arr[2];i++)
{
     printf("address= %x   value=%d\n",ptr,*ptr);
    ptr++;
}
    return 0;
}