#include<stdio.h>
void show()
{
printf("\nhello world");
}
int main()
{
int a=5;
int *p;// var pointer
p=&a;

int (*ptr)()=&show;//fun pointer
//ptr=&show;

printf("\n %d  %u",*p,p);
show();
printf("%u\n",&show);

(*ptr)();
printf("%u\n",ptr);

return 0;
}