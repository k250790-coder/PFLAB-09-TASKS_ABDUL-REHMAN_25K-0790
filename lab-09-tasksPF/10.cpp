#include <stdio.h>

int main()
{
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int *p = &a[0][0];
    printf("%d\n", *p);      
    printf("%d\n", *(p+5));  
    printf("%d\n", *(p+8));  
    int *r = &a[1][0];
    printf("%d\n", *(r+2));  
    printf("%d\n", *(r-1));  
    for(int i=0;i<12;i++)
        if(*(p+i)%3==0)
            printf("%d\n", *(p+i));
    int *last = &a[2][3];
    printf("%d\n", *last);
    return 0;
}

