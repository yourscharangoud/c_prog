// No of arrays occurs in one dimensional array

#include <stdio.h>

int main()
{
    int a[10],i,cold_count=0,mod_count=0,warm_count=0;
    printf("Enter 10 values: ");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);

    if(a[i]<=20)
        cold_count++;
    else if(a[i]>20&&a[i]<=60)
        mod_count++;
    else
        warm_count++;
    }
    
    printf("cold is %d, moderate is %d, warm is %d",cold_count,mod_count,warm_count);
    return 0;
}
