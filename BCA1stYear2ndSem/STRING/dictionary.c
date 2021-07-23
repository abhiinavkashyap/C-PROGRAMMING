#include<stdio.h>
#include<string.h>
int main()
{
    int r,c;
    printf("Enter the no. elements\n");
    scanf("%d",&r);
    printf("Enter the no. elements\n");
    scanf("%d",&c);
    char str[r][c];
    char list[r][c];
    printf("runtime initialisation\n");
    for(int i=0;i<r;i++)
    {
        list[i][c]=gets(str);
    }
    for(int i=0;i<r;i++)
     {
         
     }
    

    /*for(int i=0; i<=(n-2);i++)
    {
        for(int j=0;j<=(n-i-2);j++)
        {
            int diff = strcmp(list[j],list[j+1]);
            if( diff > 0)
            {
                char x= list[j];
                list[j]=list[j+1];
                list[j+1]=x;
            }
        }
    }
    printf("Following are the sorted data:\n");
    for(int i=0;i<n;i++)
    {
        puts(list[i]);
    }*/


    return 0;
}