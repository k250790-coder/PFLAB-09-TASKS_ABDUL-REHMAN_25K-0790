#include <stdio.h>

int main()
{
    int a[] = {10,20,30,40,50,60,70};
    int *p = a;
    printf("%d\n", *p);        
    printf("%d\n", *(p+3));    
    printf("%d\n", p[2]);     
    p = p + 4;
    printf("%d\n", *p); 
    int *q = &a[5];
    printf("%d\n", *q); 
    return 0;
}

