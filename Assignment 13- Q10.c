#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,i,c=0,h,v,d;
        printf("LCM of two numbers\n");
        printf("Sum of digits of a number\n");
        printf("Volume of a cuboid\n");
        printf("Check given number is prime or not\n");
        printf("Exit\n");
        printf("Enter a choice\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            {
                printf("Enter a numbers\n");
            scanf("%d %d",&a,&b);
            for(i=a>b?a:b;i<=a*b;i++)
            if(i%a==0&&i%b==0)
                break;
            {
                printf("LCM of %d and %d is %d\n",a,b,i);
            }
            break;
            }
        case 2:
            {
                printf("Enter a number");
                scanf("%d",&a);
                x=a;
                while(a!=0)
                {
                    d=a%10;
                    c=c+d;
                    a=a/10;

                }
                printf("Sum of digits of  %d is %d",x,c);
                break;
            }
        case 3:
            {
                printf("Enter a length of a cuboid");
                scanf("%d",&a);
                printf("Enter a breadth of a cuboid");
                scanf("%d",&b);
                printf("Enter the height of a cuboid");
                scanf("%d",&h);
                v=(a)*(b)*(h);
                printf("Volume of a cuboid is %d",v);
                break;
            }
        case 4:
            {
                printf("Enter a number");
                scanf("%d",&a);
                for(i=2;i<=a-1;i++)
                {
                    if(a%i==0)
                        break;


                }
                if(a==i)
                {
                   printf("The number is prime");
                }
                break;


            }
        case 5:
            {
                exit(0);
            }

        }

    }

