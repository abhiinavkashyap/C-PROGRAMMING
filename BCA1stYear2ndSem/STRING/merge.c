#include<stdio.h>
int main()
{
    char str1[50], str2[50], merged[50];
    printf("Enter the 1st string\n");
    gets(str1);
    printf("Enter 2nd string\n");
    gets(str2);
    int l=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        merged[i]=str1[i];
        l++;

    }
    for(int i=0;str2[i]!='\0';l++,i++)
    {
        merged[l]=str2[i];
    }
    merged[l]='\0';
    printf("merged string is :\n");
    puts(merged);

    return 0;
}