#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    printf("Enter a series");
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k);
    if(a+b==c&&b+c==d&&c+d==e&&d+e==f&&e+f==g&&f+g==h&&g+h==i&&h+i==j&&i+j==k)
    {
        printf("Number in Fiaabonic series");
    }

else
{
    printf("Not in fiabonic series");
}
}
