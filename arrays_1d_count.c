// No of arrays occurs in one dimensional array

#include <stdio.h>

int main()
{
    int a[6],i,key,count=0;
    printf("Enter 6 values: ");
    for(i=0;i<=5;i++)
        scanf("%d",&a[i]);
    printf("Enter Key: ");
    scanf("%d",&key);
    
    for(i=0;i<=5;i++)
    {
        if(a[i]==key)
        count++;
        
    }
    
    printf("No is %d",count);
    

    return 0;
}
