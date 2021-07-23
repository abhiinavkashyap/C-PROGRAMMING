#include<stdio.h>
const int MAX =4;
int main()
{
    char *names[]={"zara ali","hina ali","nuha ali","sara ali"};
    int i=0;
    for(i=0;i<MAX;i++)
    {
        printf("Value of names[%d] = %s\n",i,names[i]);
        printf("%u\n",&names[i]);

    }
    return 0;
}