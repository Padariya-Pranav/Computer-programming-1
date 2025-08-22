#include<stdio.h>
void main()
{

int a,b,c;

printf("Enter the value of a and b :");
scanf("%d %d", &a ,&b);

c=a;
a=b;
b=c;

printf("the swapped value of a with b is :%d\n" , a);

printf("the swapped value of b with a is :%d\n" , b);


}

