//count no. of vovels and no. of each vovels and no. of consonants
#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter a string\n");
    gets(str);
    int v=0;//counter for vovels
    int a=0,e=0,i=0,o=0,u=0;//counter for each vovels
    int c=0;//counter for consonants
    for(int j=0; str[j]!='\0';j++)
    {
        if(str[j]>='A'&&str[j]<='Z' || str[j]>='a'&&str[j]<='z' )//validation of data,only alphabets will be checked!!
        {
            switch(str[j])
            {
                case 'a':
                case 'A': a++;
                          v++;
                          break;
                case 'e':
                case 'E': e++;
                          v++;
                          break; 
                case 'i':
                case 'I': i++;
                          v++;
                          break;
                case 'o':
                case 'O': o++;
                          v++;
                          break;
                case 'u':
                case 'U': u++;
                          v++;
                          break; 
                default:  c++;
                          break;          
            }
        
        }
    }
    printf("Total no. of vovels : %d\n",v);
    printf("Total no. of a : %d\n",a);
    printf("Total no. of e : %d\n",e);
    printf("Total no. of i : %d\n",i);
    printf("Total no. of o : %d\n",o);
    printf("Total no. of u : %d\n",u);
    printf("Total no. of consonants : %d\n",c);

    return 0;
}