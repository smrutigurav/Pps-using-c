

#include <stdio.h>
int sum(int,int);
int main()
{
int a,b;

printf("Enter the num 1 \t");
scanf("%d", &a);
printf ("Enter num 2\t");
scanf("%d",&b);
printf("Addition of a and b is %d\n",sum(a,b));
return 0;
}
int sum(int n1,int n2)
{
int c;
c=n1+n2;
return c;
}