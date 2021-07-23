#include<stdio.h>
int main()
{
    int a[]={1,4,7,2,8,3};
    int*pa=a;
    printf("%d\n",pa++);
    printf("%d\n",pa);
    printf("%d\n",a);
    printf("%d\n",a);
    return 0;
}