#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
    printf("Value of a is %d\n", a);
}
  
int main()
{
    // fun_ptr is a pointer to function fun() 
    //int *ptr;
    int (*ptr)() = &fun;
  
    /* The above line is equivalent of following two
       void (*fun_ptr)(int);
       fun_ptr = &fun; 
    */
  
    // Invoking fun() using fun_ptr
    fun(5);
    printf(" address of %u\n",&fun);
    (*ptr)(10);
   printf(" address of %u ",ptr);
   return 0;
}