//passing a string with the help of function and then printing it.
#include<stdio.h>
int main()
{
    char ch[10];
    printf("Enter a string :\n");
    gets(ch);
    show(ch);
    return 0;
}
void show(char ch[])
{
    puts("Entered string is:");
    puts(ch);
}