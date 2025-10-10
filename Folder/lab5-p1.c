#include<stdio.h>
void main()
{
    char str[20];

    int a=0;

    printf("Enter the  name\n");



    gets(str);
    printf("The name is %s\n", str);

    while(str[a]!='\0')
    {
        a++;

    }
    printf("The length of the string is %d", a);

}
