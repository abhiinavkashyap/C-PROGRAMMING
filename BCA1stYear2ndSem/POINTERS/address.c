#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        printf("Address of %d is %x\n",a[i],&a[i]);
        printf("Address of %d of u format is %u\n",a[i],&a[i]);
    }
    return 0;
}