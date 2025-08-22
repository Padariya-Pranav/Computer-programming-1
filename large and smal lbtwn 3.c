#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter the value of A:\n" );
    scanf("%d", &a);

    printf("Enter the value of B:\n" );
    scanf("%d", &b);

    printf("Enter the value of C:\n" );
    scanf("%d", &c);

    if(a>b)
    {
        if(a>c)
        {
            printf(" A is the greatest than b and c");
        }


    }

        else
        {
            if(b>c)
            {
                printf("B is greatest than a and c");
            }

            else
            {

                printf("c is the greatest of all ");
            }
        }
}


