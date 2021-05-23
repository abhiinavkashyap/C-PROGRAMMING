#include<stdio.h>
#include<string.h>
int main()
{
    char str[50], str1[50];
    printf("Enter a string :\n");
    printf("str = %s\n",gets(str));
    int l=strlen(str);
    for(int i=(l-1),j=0; i>=0,str[i]!='\0'; i--,j++)//reverse
    {
        str1[j]=str[i];
    }
    str1[l]='\0';
    printf("str1 = %s\n",str1);
    int c=0;
    for(int i=0; str[i]!='\0' && str1[i]!='\0'; i++ )//compare
    {
        if(str[i]==str1[i])
        c++;
    }
    if (c==l)
    printf("%s is pallindrome\n",str);
    else
    printf("%s is not pallindrome\n",str);

    return 0;
}