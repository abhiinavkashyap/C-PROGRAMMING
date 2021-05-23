#include<stdio.h>                                                     
#include<string.h>                                                       
int main()
{
    char str1[10]="ABHINAV";//greater V=86
    char str2[10]="ABHINAT";//smaller T=84
    //char str1[10]="ABHINAV";//SMALLER I=73
    //char str2[10]="ABHK";//GREATER    K=75
    int diff = strcmp(str1,str2);
    printf("%d",diff);
    return 0;
}
/*#include<stdio.h>                                                     
#include<string.h>                                                       
int main()
{
    char str1[10];
    char str2[10];
    int diff;
    printf("Enter first string:\n");
    gets(str1);
    printf("Enter second string:\n");
    gets(str2);
    diff=strcmp(str1,str2);
    if(diff>0)
    printf("%s is greater than %s by ASCII value diff %d",str1,str2,diff);
    else if(diff<0)
    printf("%s is smaller than %s by ASCII value diff %d",str1,str2,diff);
    else
    printf("%s is greater than %s by ASCII value diff %d",str1,str2,diff);
    
    
    return 0;
}*/

