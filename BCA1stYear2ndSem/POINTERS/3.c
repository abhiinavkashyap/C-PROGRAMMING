#include<stdio.h>
int main()
{
    //first way
    int a=76;
    int*pa=&a;
    //second way
    int b=76;
    int*pb;
    pb=&b;
    printf("%x     %x",pa,pb);

    return 0;
}