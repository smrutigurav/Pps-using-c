#include<stdio.h>
int sum(int n1,int n2)
{
    int add;
    add=n1+n2;
    return add;
}
int sub(int n1,int n2)
{
    int sub;
    sub=n1-n2;
    return sub;
}
int multi(int n1,int n2)
{
    int multi;
    multi=n1*n2;
    return multi;
}
int div(int n1,int n2)
{
    int div;
    div=n1/n2;
    return div;
}
int main()
{
    int num1,num2,run;
    printf("Enter first number \t ");
    scanf("%d",&num1);
    printf("Enter second number \t");
    scanf("%d",&num2);
    printf("Enter 1 for addition \n");
    printf("Enter 2 for subtraction \n");
    printf("Enter 3 for multiplication \n");
    printf("Enter 4 for division \n");
    printf("enter the number");
    scanf("%d",&run);
    if (run>=5);
    {
        printf("error");
    }
    if (run==1)
    {
        printf("the addition is %d",sum(num1,num2));
    }
    if (run==2)
    {
        printf("the subtraction is %d",sum(num1,num2));
    }
    if (run==2)
    {
        printf("the multiplication is %d",sum(num1,num2));
    }
    if (run==3)
    {
        printf("the multiplication is %d",sum(num1,num2));
    }
    if (run==4)
    {
        printf("the division is %d",sum(num1,num2));
    }
    return 0;
}
