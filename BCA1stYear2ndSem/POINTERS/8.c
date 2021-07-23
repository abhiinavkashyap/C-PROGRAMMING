#include<stdio.h>
#include<string.h>
void getSeconds(unsigned long *par);
unsigned long main()
{
    unsigned long sec;
    getSeconds(&sec);
    printf("Number of seconds : %ld\n",sec);
    return 0;
}
void getSeconds(unsigned long *par)
{
    *par = time(NULL);
    return 0;
}