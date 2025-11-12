#include <stdio.h>

int main()
{
    int a=100, b=200, c=300;
    int *p1=&a, *p2=&b, *p3=&c;
    int *temp=p1; 
    p1=p2; 
    p2=p3; 
    p3=temp;
    *p1 = *p1 + 10; 
    *p2 = *p2 - 20; 
    *p3 = *p3 * 2;
    p1=&c; 
    p2=&a; 
    p3=&b;
    *p1 = *p1 + 5;  
    *p2 = *p2 - 5;  
    *p3 = *p3 * 2;  

    printf("%d %d %d", a,b,c);
    return 0;
}

