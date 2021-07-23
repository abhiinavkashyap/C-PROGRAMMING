#include <stdio.h>
struct number
{
    
};
typedef struct number T1;

struct number
{
    
};
typedef struct number T2;

struct number
{
    
};
typedef struct number T3;
int f(int x)
{
    return x+1;
}

void g(T1 x,T2 y,T3 z)
{
    for(int i=0;i<z;i++)
    {
        printf("%d",x(y[i]));
    }
}



int main()
{
    int A[]={0,1,2,3};
    g(f,A,4)

    return 0;
   
}