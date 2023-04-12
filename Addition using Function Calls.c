//Addition using Function Calls


#include <stdio.h>

void add();

int main()
{
    printf("Before Function Call\n");
    add();
    printf("Completed");
    return 0;
}

void add(){
    int a=5, b=10;
    int c = a+b;
    printf("%d\n",c);
}
