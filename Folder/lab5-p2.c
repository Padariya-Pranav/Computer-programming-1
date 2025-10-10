#include<stdio.h>
#include<string.h>
void main()

{
    char str[25];
    int a;

    printf("Enter the string :\n");
    gets (str);

    printf("The string is %s\n" , str);

    printf("The length of the string is %d", strlen(str));

    while(str[a] !=0)
    {

        if(str[a] <97 && str[a]>=65)
            str[a]+=32;

    }
    str[a]++;

    printf("%s", str[a]);

}
