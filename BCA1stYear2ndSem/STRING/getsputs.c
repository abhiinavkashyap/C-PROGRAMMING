#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter a string\n");
    gets(str);
    int i=0, space=0;
    while(str[i]!='\0')
    {
        if (str[i]==32)
        space++;
        i++;
    }
    puts(str);
    printf("No. of space in the string is %d\n",space);
    return 0;
}