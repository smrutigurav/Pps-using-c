

#include <stdio.h>

int addition(int a, int b)
 {
    int c;
    c = a + b;
    printf("Addition is %d\n", c);
}

int main() 
{
    int n1, n2;
    printf("Enter first number:\t");
    scanf("%d", &n1);
    
    printf("Enter second number:\t");
    scanf("%d", &n2);
    
    addition(n1, n2);
    
    return 0;
}
