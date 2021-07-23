#include<stdio.h>
int main()
{
    int var=20;
    int*ip;
    ip=&var;
    printf("Address of var variable: %x\n",&var);
    printf("Address stored in ip variable: %x\n",ip);
    printf("Address of ip variable:%x\n",&ip);
    printf("value of *ip variable: %d\n",*ip);

    return 0;
}