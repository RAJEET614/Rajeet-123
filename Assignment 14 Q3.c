#include<stdio.h>
int is_even(int );
int main()
{
     int k;
     int x;
     printf("Enter the number");
     scanf("%d",&x);
     k=is_even(x);
     printf("%d",k);

}
int is_even(int x)
{
    return x%2==0?1:0;

}

