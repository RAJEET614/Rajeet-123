#include <stdio.h>

int main()
{
    int x,a,b;
    printf("Addition\n");
    printf("Subtraction\n");
    printf("Multiplication\n");
    printf("Divison\n");
    printf("Enter the number\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        {
            printf("Enter two numbers\n");
            scanf("%d %d",&a,&b);
            printf("The sum of %d and %d is %d",a,b,a+b);
            break;
        }
    case 2:
        {
            printf("Enter two numbers\n");
            scanf("%d %d",&a,&b);
            printf("Difference of %d and %d is %d",a,b,a-b);
            break;
        }
    case 3:
        {
            printf("Enter two numbers\n");
            scanf("%d %d",&a,&b);
            printf("Multiplication of two numbers is %d and %d",a,b,a*b);
            break;
        }
    case 4:
        {
            printf("Enter two numbers\n");
            scanf("%d %d",&a,&b);
            printf("Quotient  of two numbers is %d and %d is %d",a,b,a/b);
            break;
        }
    case 5:
        {
            exit(0);
        }

    }

    return 0;
}

