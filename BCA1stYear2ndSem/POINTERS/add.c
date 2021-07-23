#include<stdio.h>
int main()
{
    int a, b, sum;
    int*pa;
    int*pb;
    scanf("%d",&a);
    scanf("%d",&b);
    pa=&a;
    pb=&b;
    sum=*pa + *pb;
    int*psum;
    psum=&sum;
    printf("%x\n",&pa);//prints the address of pa variable
    printf("%x\n",pa);//prints the stored address(address of "a" variable)
    printf("%x\n",&a);//prints the address of a
    printf("%d\n",sum);//prints the value of sum simply using variable
    printf("%d\n",*psum);//prints the value of sum using pointer
   
    return 0;
}