#include<stdio.h>
int main()
{
    int v=20;
    int *ip;
    ip=&v;
    printf("%x\n",&v);
    printf("%u\n",&v);
    printf("%x\n",ip);
    printf("%d\n",*ip);
    printf("Hello World\n");

    return 0;
}