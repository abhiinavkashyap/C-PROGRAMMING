#include <stdio.h>
    #include <string.h>
    void main()
    {
 
        char name[10][8], tname[10][8], temp[8];
        int i, j, n;
 
        printf("Enter the value of n \n");
        scanf("%d", &n);
        printf("Enter %d names \n", n);
 
        for (i = 0; i < n; i++) 
        {
            //scanf("%s", name[i]);
            gets(name[i]);
            strcpy(tname[i], name[i]);
        }
        
        for (i = 0; i < (n-1); i++)
        {
            for (j = 0; j < (n-i-1); j++)
            {
                if (strcmp(name[j], name[j+1]) > 0) 
                {
                    strcpy(temp, name[j]);
                    strcpy(name[j], name[j+1]);
                    strcpy(name[j+1], temp);
                }
            }
        }
 
        printf("\n----------------------------------------\n");
        printf("Input NamestSorted names\n");
        printf("------------------------------------------\n");
 
        for (i = 0; i < n; i++) 
        {
            printf("%s\t\t%s\n", tname[i], name[i]);
        }
 
        printf("------------------------------------------\n");
 
    }